#-------------------------------------------------
#
# Project created by QtCreator 2011-12-23T14:33:14
#
#-------------------------------------------------

QT       += core gui

TARGET = Tasklist
TEMPLATE = app


SOURCES += main.cpp\
        Qt-interface/mainwindow.cpp \
        Core/listoftask.cpp \
        Core/task.cpp

HEADERS  += headers.h \
         Qt-interface/Qt-interface-headers.h \
         Qt-interface/mainwindow.h \
         Core/core-headers.h \
         Core/listoftask.h \
         Core/task.h


FORMS    += Qt-interface/mainwindow.ui
