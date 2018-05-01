/********************************************************************************
** Form generated from reading UI file 'dialog_messagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MESSAGEBOX_H
#define UI_DIALOG_MESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_messageBox
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_content;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_OK;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Dialog_messageBox)
    {
        if (Dialog_messageBox->objectName().isEmpty())
            Dialog_messageBox->setObjectName(QStringLiteral("Dialog_messageBox"));
        Dialog_messageBox->resize(359, 193);
        Dialog_messageBox->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\346\245\267\344\275\223\";"));
        verticalLayout = new QVBoxLayout(Dialog_messageBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 25);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_content = new QLabel(Dialog_messageBox);
        label_content->setObjectName(QStringLiteral("label_content"));
        label_content->setMinimumSize(QSize(0, 25));
        label_content->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(label_content);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_OK = new QPushButton(Dialog_messageBox);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));

        horizontalLayout->addWidget(pushButton_OK);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Cancel = new QPushButton(Dialog_messageBox);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout->addWidget(pushButton_Cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog_messageBox);

        QMetaObject::connectSlotsByName(Dialog_messageBox);
    } // setupUi

    void retranslateUi(QDialog *Dialog_messageBox)
    {
        Dialog_messageBox->setWindowTitle(QApplication::translate("Dialog_messageBox", "Dialog", 0));
        label_content->setText(QApplication::translate("Dialog_messageBox", "\346\217\220\347\244\272\345\206\205\345\256\271", 0));
        pushButton_OK->setText(QApplication::translate("Dialog_messageBox", "\347\241\256\345\256\232", 0));
        pushButton_Cancel->setText(QApplication::translate("Dialog_messageBox", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_messageBox: public Ui_Dialog_messageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MESSAGEBOX_H
