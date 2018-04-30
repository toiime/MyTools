#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // 设置窗口标题...
    this->setWindowTitle("SimpleDesktopTool");

    // 状态栏显示时间...
    this->m_currentTimeLabel = new QLabel;
    ui->statusBar->addPermanentWidget(this->m_currentTimeLabel);
    this->m_showTimeTimer = new QTimer(this);
    connect(this->m_showTimeTimer,SIGNAL(timeout()),this,SLOT(slotUpdateTime()));
    this->m_showTimeTimer->start(1000);

    // 初始化用于搜索的类
    this->m_searchFunction = new SearchFunction;
    this->ui->radioButton_chooseDirectory->setChecked(true);

    // 初始化tableWidget
    InitTableWidget();



    // 信号与槽连接...
    // 打开文件或文件夹按钮
    connect(ui->pushButton_chooseDirectory, &QPushButton::clicked, this, &MainWindow::slotChooseDirectory);
    // 单选文件夹
    connect(ui->radioButton_chooseDirectory, &QRadioButton::clicked, this, [&](){
        ui->pushButton_chooseDirectory->setText(QStringLiteral("打开目录"));
        this->m_searchFunction->m_bIsDirectoryOrFile = true;
    });
    // 单选文件
    connect(ui->radioButton_chooseFile, &QRadioButton::clicked, this, [&](){
        ui->pushButton_chooseDirectory->setText(QStringLiteral("打开文件"));
        this->m_searchFunction->m_bIsDirectoryOrFile = false;
    });
    // 搜索按钮
    connect(ui->pushButton_search, &QPushButton::clicked, this, &MainWindow::slotSearch);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotUpdateTime(){
    QDateTime currentTime = QDateTime::currentDateTime();
    QString strTime = currentTime.toString("yyyy-MM-dd hh:mm:ss ddd");
    this->m_currentTimeLabel->setText(" Time is " + strTime + " ");
}

void MainWindow::slotChooseDirectory(){

    if(this->m_searchFunction->m_bIsDirectoryOrFile){
        QString currentDirectory = QFileDialog::getExistingDirectory(this
                                                                     , "ChooseDirectory"
                                                                     , QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation));
        if(currentDirectory.isEmpty())
            return;
        if(currentDirectory.endsWith("/"))
            ui->lineEdit_showDirectoryPath->setText(currentDirectory);
        else
            ui->lineEdit_showDirectoryPath->setText(currentDirectory + "/");
        this->m_searchFunction->m_strDirectoryOrFilePath = currentDirectory;
    }else{
        //getOpenFileName
        //getOpenFileNames
        QString currentFile = QFileDialog::getOpenFileName(this
                                                           , "ChooseFile"
                                                           , QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)
                                                           , "All Files(*.*)");
        if(currentFile.isEmpty())
            return;
        ui->lineEdit_showDirectoryPath->setText(currentFile);
        this->m_searchFunction->m_strDirectoryOrFilePath = currentFile;
    }
}

void MainWindow::slotSearch(){
    // 禁用搜索按钮...
    ui->pushButton_search->setEnabled(false);

    // 清除列表现有数据...
    ui->tableWidget_searchResult->clearContents();
    ui->tableWidget_searchResult->setRowCount(0);

    QString keyWord = ui->lineEdit_keyWord->text();
    // 1.判断关键字是否为空...
    if(keyWord.isEmpty()){
        Dialog_messageBox msg(this);
        msg.setContent(QStringLiteral("请先输入关键字"));
        msg.exec();
        ui->pushButton_search->setEnabled(true);
        return;
    }
    this->m_searchFunction->m_strKeyWord = keyWord;
    // 2.判断路径是否为空
    if(this->m_searchFunction->m_strDirectoryOrFilePath.isEmpty()){
        // 系统提示框太TM丑了...自己写一个...
        Dialog_messageBox msg(this);
        msg.setContent(QStringLiteral("请先选择目录或文件"));
        msg.exec();
        ui->pushButton_search->setEnabled(true);
        return;
    }
    // 3.调用搜索类
    this->m_searchFunction->searchExecute();
    // 4.显示结果
    for(auto & l : m_searchFunction->m_fileList)
        InsertDataToTableWidget(l);

    // 恢复搜索按钮...
    ui->pushButton_search->setEnabled(true);
}

void MainWindow::InitTableWidget(){
    // 调整列宽度...
    ui->tableWidget_searchResult->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget_searchResult->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget_searchResult->setItemDelegate(new MyQStyledItemDelegate());

    ui->tableWidget_searchResult->setMouseTracking(true);    //开启捕获鼠标功能

}

void MainWindow::InsertDataToTableWidget(QFileInfo&fileInfo){
    int RowCont = ui->tableWidget_searchResult->rowCount();
    ui->tableWidget_searchResult->insertRow(RowCont);
    ui->tableWidget_searchResult->setItem(RowCont,0,new QTableWidgetItem(fileInfo.absoluteFilePath()));
    ui->tableWidget_searchResult->setItem(RowCont,1,new QTableWidgetItem(fileInfo.suffix()));

    QString t_str;
    qint64 t_size = fileInfo.size();
    int divideTime = 0;
    while(t_size > 1023 && divideTime < 4){
        t_size >>= 10;
        ++divideTime;
    }
    if(divideTime == 0){
        t_str.setNum(t_size).append(" Byte");
    }else if(divideTime == 1){
        t_str.setNum(fileInfo.size() / (double)(1024)).append(" K");
    }else if(divideTime == 2){
        t_str.setNum(fileInfo.size() / (double)(1024 * 1024)).append(" M");
    }else if(divideTime == 3){
        t_str.setNum(fileInfo.size() / (double)(1024 * 1024 * 1024)).append(" G");
    }

    ui->tableWidget_searchResult->setItem(RowCont,2,new QTableWidgetItem(t_str));

    // 设置文件类型居中显示...
    ui->tableWidget_searchResult->item(RowCont,1)->setTextAlignment(Qt::AlignCenter);
}

