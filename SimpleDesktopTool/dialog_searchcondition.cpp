#include "dialog_searchcondition.h"
#include "ui_dialog_searchcondition.h"

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

    // 默认选中 不包函单选按钮...
    ui->radioButton_notContain->setChecked(true);

    // 设置提示文字...
    ui->lineEdit_contain->setPlaceholderText("example: .h.cpp.txt");
    ui->lineEdit_notContain->setPlaceholderText("example: .h.cpp.txt");

}

Dialog_searchCondition::~Dialog_searchCondition()
{
    delete ui;
}
