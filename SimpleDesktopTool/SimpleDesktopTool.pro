#-------------------------------------------------
#
# Project created by QtCreator 2018-04-28T19:22:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleDesktopTool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    searchfunction.cpp \
    dialog_messagebox.cpp \
    myqstyleditemdelegate.cpp \
    myqtablewidget.cpp \
    dialog_searchcondition.cpp \
    tools.cpp

HEADERS  += mainwindow.h \
    searchfunction.h \
    dialog_messagebox.h \
    myqstyleditemdelegate.h \
    myqtablewidget.h \
    common.h \
    dialog_searchcondition.h \
    tools.h

FORMS    += mainwindow.ui \
    dialog_messagebox.ui \
    dialog_searchcondition.ui

RC_ICONS += res/icons/main.ico
