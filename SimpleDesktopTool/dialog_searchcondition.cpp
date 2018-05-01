#include "dialog_searchcondition.h"
#include "ui_dialog_searchcondition.h"
#include "mainwindow.h"

Dialog_searchCondition::Dialog_searchCondition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_searchCondition)
{
    ui->setupUi(this);



    // 设置窗口标题...
    this->setWindowTitle("SearchCondition");

    // 去掉关闭边上的问号按钮...
    Qt::WindowFlags flags = Qt::Dialog;
    flags |= Qt::WindowCloseButtonHint;
    setWindowFlags(flags);

    // 单选按钮加组...
    m_buttonGroup = new QButtonGroup;
    m_buttonGroup->addButton(ui->radioButton_contain, 0);
    m_buttonGroup->addButton(ui->radioButton_notContain, 1);

    // 默认选中 不包函单选按钮...
    ui->radioButton_notContain->setChecked(true);

    // 设置提示文字...
    ui->lineEdit_contain->setPlaceholderText("example: .h.cpp.txt");
    ui->lineEdit_notContain->setPlaceholderText("example: .h.cpp.txt");

    // connect 确定 取消按钮
    connect(ui->pushButton_OK, &QPushButton::clicked, this, &Dialog_searchCondition::slotButtonOK);

    connect(ui->pushButton_Cancel, &QPushButton::clicked, this, [&](){
        this->reject();
    });


    // 加载用户数据...
    InitUserData();

}

Dialog_searchCondition::~Dialog_searchCondition()
{
    delete ui;
}

void Dialog_searchCondition::slotButtonOK(){
    // 拿参数...
    MainWindow * ptrMainWindow = (MainWindow*)parentWidget();
    QRadioButton * pRadioButton = qobject_cast<QRadioButton*>(m_buttonGroup->checkedButton());

    if(!QString::compare(pRadioButton->objectName(), "radioButton_contain"))
        ptrMainWindow->m_searchFunction->m_searchCondition.bIsContainSuffix = true;
    else if(!QString::compare(pRadioButton->objectName(), "radioButton_notContain"))
        ptrMainWindow->m_searchFunction->m_searchCondition.bIsContainSuffix = false;

    ptrMainWindow->m_searchFunction->m_searchCondition.strContainSuffix =
            ui->lineEdit_contain->text().split(".");
    ptrMainWindow->m_searchFunction->m_searchCondition.strNotContainSuffix =
            ui->lineEdit_notContain->text().split(".");

    this->accept();
}

void Dialog_searchCondition::InitUserData(){
    MainWindow * ptrMainWindow = (MainWindow*)parentWidget();
    if(ptrMainWindow->m_searchFunction->m_searchCondition.bIsContainSuffix)
        ui->radioButton_contain->setChecked(true);

}
