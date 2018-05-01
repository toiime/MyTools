/********************************************************************************
** Form generated from reading UI file 'dialog_searchcondition.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SEARCHCONDITION_H
#define UI_DIALOG_SEARCHCONDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_searchCondition
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_fileType;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_contain;
    QLineEdit *lineEdit_contain;
    QRadioButton *radioButton_notContain;
    QLineEdit *lineEdit_notContain;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_OK;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dialog_searchCondition)
    {
        if (Dialog_searchCondition->objectName().isEmpty())
            Dialog_searchCondition->setObjectName(QStringLiteral("Dialog_searchCondition"));
        Dialog_searchCondition->resize(583, 360);
        Dialog_searchCondition->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\346\245\267\344\275\223\";"));
        verticalLayout_2 = new QVBoxLayout(Dialog_searchCondition);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        groupBox_fileType = new QGroupBox(Dialog_searchCondition);
        groupBox_fileType->setObjectName(QStringLiteral("groupBox_fileType"));
        horizontalLayout = new QHBoxLayout(groupBox_fileType);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_contain = new QRadioButton(groupBox_fileType);
        radioButton_contain->setObjectName(QStringLiteral("radioButton_contain"));

        verticalLayout->addWidget(radioButton_contain);

        lineEdit_contain = new QLineEdit(groupBox_fileType);
        lineEdit_contain->setObjectName(QStringLiteral("lineEdit_contain"));

        verticalLayout->addWidget(lineEdit_contain);

        radioButton_notContain = new QRadioButton(groupBox_fileType);
        radioButton_notContain->setObjectName(QStringLiteral("radioButton_notContain"));

        verticalLayout->addWidget(radioButton_notContain);

        lineEdit_notContain = new QLineEdit(groupBox_fileType);
        lineEdit_notContain->setObjectName(QStringLiteral("lineEdit_notContain"));

        verticalLayout->addWidget(lineEdit_notContain);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBox_fileType);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_OK = new QPushButton(Dialog_searchCondition);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));

        horizontalLayout_4->addWidget(pushButton_OK);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_Cancel = new QPushButton(Dialog_searchCondition);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout_4->addWidget(pushButton_Cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(Dialog_searchCondition);

        QMetaObject::connectSlotsByName(Dialog_searchCondition);
    } // setupUi

    void retranslateUi(QDialog *Dialog_searchCondition)
    {
        Dialog_searchCondition->setWindowTitle(QApplication::translate("Dialog_searchCondition", "Dialog", 0));
        groupBox_fileType->setTitle(QApplication::translate("Dialog_searchCondition", "\346\226\207\344\273\266\347\261\273\345\236\213", 0));
        radioButton_contain->setText(QApplication::translate("Dialog_searchCondition", "\345\217\252\345\214\205\345\207\275\344\273\245\344\270\213\347\261\273\345\236\213", 0));
        radioButton_notContain->setText(QApplication::translate("Dialog_searchCondition", "\344\270\215\345\214\205\345\207\275\344\273\245\344\270\213\347\261\273\345\236\213", 0));
        pushButton_OK->setText(QApplication::translate("Dialog_searchCondition", "\347\241\256\345\256\232", 0));
        pushButton_Cancel->setText(QApplication::translate("Dialog_searchCondition", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_searchCondition: public Ui_Dialog_searchCondition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SEARCHCONDITION_H
