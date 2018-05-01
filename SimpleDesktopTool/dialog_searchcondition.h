#ifndef DIALOG_SEARCHCONDITION_H
#define DIALOG_SEARCHCONDITION_H

#include <QDialog>

namespace Ui {
class Dialog_searchCondition;
}

class Dialog_searchCondition : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_searchCondition(QWidget *parent = 0);
    ~Dialog_searchCondition();

private:
    Ui::Dialog_searchCondition *ui;
};

#endif // DIALOG_SEARCHCONDITION_H
