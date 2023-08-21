#include "secondclass.h"


SecondClass::SecondClass(QObject *parent) : QObject(parent)
{

    id_timer_one_sec = startTimer(1000);
    connect(this, &SecondClass::signalOneSec, this, &SecondClass::chekStateHello);

}

void SecondClass::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == id_timer_one_sec)
    {
        qDebug() << "-----------------------------";
        qDebug() << "Second class: timer = 1000   | id_timer_one_sec = " << id_timer_one_sec;
        qDebug() << "-----------------------------";

        emit signalOneSec();
    }
}

//void SecondClass::chekStateHello(bool _flag)
void SecondClass::chekStateHello()
{
//    qDebug() << "flag Hello: " << _flag;
    qDebug() << "flag Hello: ";
}

