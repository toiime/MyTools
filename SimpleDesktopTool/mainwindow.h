#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <QDateTime>
#include <QRadioButton>
#include <QFileDialog>
#include <QDebug>
#include <QStandardPaths>
#include <QMessageBox>
#include <QKeyEvent>

#include "searchfunction.h"
#include "dialog_messagebox.h"
#include "myqstyleditemdelegate.h"
#include "dialog_searchcondition.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;



    // 用户定义区...
public:

protected:
    void keyPressEvent(QKeyEvent *event);

protected:
    void InitTableWidget();
    void ReInitTableWidget();
    void InsertFileInfoToTableWidget(QFileInfo&fileInfo);
    void InsertFileContentToTableWidget(RESULT_DIRECTOR_FIND_CONTENT&fileContent);
    void InsertFileContentToTableWidget(QStringList & sl);

private slots:
    void slotUpdateTime();
    void slotChooseDirectory();
    void slotSearch();
    void slotFindContentFromDirectory();

private:
    // 用于显示时间的label
    QLabel * m_currentTimeLabel;
    // 用于更新时间显示的定时器
    QTimer * m_showTimeTimer;
    // 用于搜索的类
    SearchFunction * m_searchFunction;





    friend class Dialog_searchCondition;
};

#endif // MAINWINDOW_H
