#ifndef DIALOG_MESSAGEBOX_H
#define DIALOG_MESSAGEBOX_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class Dialog_messageBox;
}

class Dialog_messageBox : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_messageBox(QWidget *parent = 0);
    ~Dialog_messageBox();

private:
    Ui::Dialog_messageBox *ui;


public:
    void setContent(QString content);

};

#endif // DIALOG_MESSAGEBOX_H
