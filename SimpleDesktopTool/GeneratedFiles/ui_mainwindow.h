/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myqtablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_showDirectoryPath;
    QRadioButton *radioButton_chooseDirectory;
    QRadioButton *radioButton_chooseFile;
    QPushButton *pushButton_chooseDirectory;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_keyWord;
    QPushButton *pushButton_search;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_findFromDirectory;
    MyQTableWidget *tableWidget_searchResult;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 500);
        MainWindow->setMinimumSize(QSize(900, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\346\245\267\344\275\223\";"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit_showDirectoryPath = new QLineEdit(groupBox);
        lineEdit_showDirectoryPath->setObjectName(QStringLiteral("lineEdit_showDirectoryPath"));
        lineEdit_showDirectoryPath->setEnabled(true);
        lineEdit_showDirectoryPath->setFocusPolicy(Qt::StrongFocus);
        lineEdit_showDirectoryPath->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_showDirectoryPath);

        radioButton_chooseDirectory = new QRadioButton(groupBox);
        radioButton_chooseDirectory->setObjectName(QStringLiteral("radioButton_chooseDirectory"));

        horizontalLayout->addWidget(radioButton_chooseDirectory);

        radioButton_chooseFile = new QRadioButton(groupBox);
        radioButton_chooseFile->setObjectName(QStringLiteral("radioButton_chooseFile"));

        horizontalLayout->addWidget(radioButton_chooseFile);

        pushButton_chooseDirectory = new QPushButton(groupBox);
        pushButton_chooseDirectory->setObjectName(QStringLiteral("pushButton_chooseDirectory"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_chooseDirectory->sizePolicy().hasHeightForWidth());
        pushButton_chooseDirectory->setSizePolicy(sizePolicy1);
        pushButton_chooseDirectory->setMinimumSize(QSize(200, 0));
        pushButton_chooseDirectory->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(pushButton_chooseDirectory);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_keyWord = new QLineEdit(groupBox);
        lineEdit_keyWord->setObjectName(QStringLiteral("lineEdit_keyWord"));

        horizontalLayout_2->addWidget(lineEdit_keyWord);

        pushButton_search = new QPushButton(groupBox);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        sizePolicy1.setHeightForWidth(pushButton_search->sizePolicy().hasHeightForWidth());
        pushButton_search->setSizePolicy(sizePolicy1);
        pushButton_search->setMinimumSize(QSize(200, 0));
        pushButton_search->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(pushButton_search);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_3->addWidget(checkBox_2);

        checkBox_findFromDirectory = new QCheckBox(groupBox);
        checkBox_findFromDirectory->setObjectName(QStringLiteral("checkBox_findFromDirectory"));

        horizontalLayout_3->addWidget(checkBox_findFromDirectory);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox);

        tableWidget_searchResult = new MyQTableWidget(centralWidget);
        if (tableWidget_searchResult->columnCount() < 3)
            tableWidget_searchResult->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_searchResult->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_searchResult->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_searchResult->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_searchResult->setObjectName(QStringLiteral("tableWidget_searchResult"));
        tableWidget_searchResult->setStyleSheet(QLatin1String("QTableView{\n"
"        border:none;\n"
"}\n"
"QTableView::item:selected{\n"
"        color:white;\n"
"        background:rgb(188,220,244);\n"
"}"));
        tableWidget_searchResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_searchResult->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_searchResult->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_searchResult->setShowGrid(false);
        tableWidget_searchResult->setGridStyle(Qt::NoPen);

        verticalLayout_2->addWidget(tableWidget_searchResult);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\234\254\345\234\260\346\220\234\347\264\242", 0));
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\350\214\203\345\233\264:", 0));
        radioButton_chooseDirectory->setText(QApplication::translate("MainWindow", "\347\233\256\345\275\225", 0));
        radioButton_chooseFile->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        pushButton_chooseDirectory->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\347\233\256\345\275\225", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\347\233\256\346\240\207:", 0));
        pushButton_search->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "\346\250\241\347\263\212\346\220\234\347\264\242", 0));
        checkBox_findFromDirectory->setText(QApplication::translate("MainWindow", "\347\233\256\345\275\225\344\270\255\346\220\234\347\264\242\346\226\207\344\273\266\345\206\205\345\256\271", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_searchResult->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\350\267\257\345\276\204", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_searchResult->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_searchResult->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
