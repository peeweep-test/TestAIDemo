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
    // QString errorMessage2 = QObject::tr("test !!!");
    // QString errorMessage3 = QObject::tr("ok");
    QString errorMessage4 = QObject::tr("Today is a good day");
    QString errorMessage5 = QObject::tr("I love you");
    QString errorMessage6 = QObject::tr("I hate you");
    QString mouseOperation = QObject::tr("Software developers use mouse to control cursor on screen, a bosom friend afar brings a distant land near");
    QString errorMessage7 = QObject::tr("I am a good person");
    QString errorMessage8 = QObject::tr("I am a bad person");
    QString errorMessage9 = QObject::tr("I am a good person");
    // QString errorMessage10 = QObject::tr("I am a bad person");  

    QString monday = QObject::tr("Monday");
    QString tuesday = QObject::tr("Tuesday");
    QString wednesday = QObject::tr("Wednesday");
    QString thursday = QObject::tr("Thursday");
    QString friday = QObject::tr("Friday");
    QString saturday = QObject::tr("Saturday");
    QString sunday = QObject::tr("Sunday");
    // QString spring = QObject::tr("Spring");
    // QString summer = QObject::tr("Summer");
    // QString autumn = QObject::tr("Autumn");
    // QString winter = QObject::tr("Winter");
    // QString today = QObject::tr("today");
    // QString python = QObject::tr("python");
    QString text1 = QObject::tr("The quick brown fox jumps over the lazy dog");
    QString text2 = QObject::tr("All work and no play makes Jack a dull boy");
    QString text3 = QObject::tr("To be or not to be, that is the question");
    QString spring = QObject::tr("Spring");
    QString summer = QObject::tr("Summer");
    QString autumn = QObject::tr("Autumn");
    QString winter = QObject::tr("Winter");
    QString text4 = QObject::tr("good morning");
    QString text5 = QObject::tr("good afternoon");
    QString text6 = QObject::tr("good evening");
    QString text7 = QObject::tr("good night");
    // QString text8 = QObject::tr("goodbye");
    // QString text9 = QObject::tr("hello");
    // QString text10 = QObject::tr("hi");

    

    // 打印普通翻译信息
    qWarning() << greeting;

    // 使用 qWarning() 输出警告信息
    qWarning() << warningMessage;

    return a.exec();
}
