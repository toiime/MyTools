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
        //getExistingDirectory
    }else{
        //getOpenFileName
        //getOpenFileNames
    }
}


