#include "dialog_messagebox.h"
#include "ui_dialog_messagebox.h"

Dialog_messageBox::Dialog_messageBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_messageBox)
{
    ui->setupUi(this);

    // 设置窗口标题...
    this->setWindowTitle("Information");

    // 去掉关闭边上的问号按钮...
    Qt::WindowFlags flags = Qt::Dialog;
    flags |= Qt::WindowCloseButtonHint;
    setWindowFlags(flags);

    // connect 确定 取消按钮
    connect(ui->pushButton_OK, &QPushButton::clicked, this, [&](){
        this->accept();
    });
    connect(ui->pushButton_Cancel, &QPushButton::clicked, this, [&](){
        this->reject();
    });


}

Dialog_messageBox::~Dialog_messageBox()
{
    delete ui;
}

void Dialog_messageBox::setContent(QString content){
    ui->label_content->setText(content);
}
