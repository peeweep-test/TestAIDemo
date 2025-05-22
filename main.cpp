#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // w.show();

    // 使用 tr() 添加两条翻译字段
    QString greeting = QObject::tr("Hello, welcome to the application!");
    QString warningMessage = QObject::tr("This is a warning message.");
    QString errorMessage = QObject::tr("This is an error message.");
    QString errorMessage2 = QObject::tr("test !!!");
    QString errorMessage3 = QObject::tr("ok");
    QString errorMessage4 = QObject::tr("Today is a good day");
    QString errorMessage5 = QObject::tr("I love you");
    QString errorMessage6 = QObject::tr("I hate you");
    QString errorMessage7 = QObject::tr("I am a good person");
    QString errorMessage8 = QObject::tr("I am a bad person");
    QString errorMessage9 = QObject::tr("I am a good person");
    QString errorMessage10 = QObject::tr("I am a bad person");
    

    // 打印普通翻译信息
    qWarning() << greeting;

    // 使用 qWarning() 输出警告信息
    qWarning() << warningMessage;

    return a.exec();
}
