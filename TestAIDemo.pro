#-------------------------------------------------
#
# Project created by QtCreator 2025-05-22T10:56:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestAIDemo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

# Translation files
TRANSLATIONS += \
    translations/TestAIDemo_ar.ts \
    translations/TestAIDemo_ast.ts \
    translations/TestAIDemo_az.ts \
    translations/TestAIDemo_en.ts \
    translations/TestAIDemo_en_US.ts \
    translations/TestAIDemo_it.ts \
    translations/TestAIDemo_ja.ts \
    translations/TestAIDemo_zh_CN.ts \
    translations/TestAIDemo_zh_HK.ts \
    translations/TestAIDemo_zh_TW.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
