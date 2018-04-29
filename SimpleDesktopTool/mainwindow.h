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

#include "searchfunction.h"
#include "dialog_messagebox.h"

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
    void InitTableWidget();
    void InsertDataToTableWidget(QFileInfo&fileInfo);

private slots:
    void slotUpdateTime();
    void slotChooseDirectory();
    void slotSearch();

private:
    // 用于显示时间的label
    QLabel * m_currentTimeLabel;
    // 用于更新时间显示的定时器
    QTimer * m_showTimeTimer;
    // 用于搜索的类
    SearchFunction * m_searchFunction;


};

#endif // MAINWINDOW_H
