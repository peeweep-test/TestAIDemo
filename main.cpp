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
    QString errorMessage11 = QObject::tr("我是一个肉鼠");
    QString errorMessage12 = QObject::tr("你是一个瘦猫");
    QString errorMessage13 = QObject::tr("今天不吃晚饭");
    QString errorMessage14 = QObject::tr("你是个竹鼠");
    QString monday = QObject::tr("Monday");
    QString tuesday = QObject::tr("Tuesday");
    QString wednesday = QObject::tr("Wednesday");
    QString thursday = QObject::tr("Thursday");
    QString friday = QObject::tr("Friday");
    QString saturday = QObject::tr("Saturday");
    QString sunday = QObject::tr("Sunday");
    QString spring = QObject::tr("Spring");
    QString summer = QObject::tr("Summer");
    QString autumn = QObject::tr("Autumn");
    QString winter = QObject::tr("Winter");
    QString today = QObject::tr("today");
    QString python = QObject::tr("python");

    

    // 打印普通翻译信息
    qWarning() << greeting;

    // 使用 qWarning() 输出警告信息
    qWarning() << warningMessage;

    return a.exec();
}
