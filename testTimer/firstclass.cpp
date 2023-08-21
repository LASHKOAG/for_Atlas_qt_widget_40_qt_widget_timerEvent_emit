#include "firstclass.h"

FirstClass::FirstClass(QObject *parent) : QObject(parent)
{
    id_timer_update = startTimer(200);
    id_timer_hello = startTimer(500);
}

void FirstClass::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == id_timer_update)
    {
        //action;
        qDebug() << "First class: timer = 200   | " << id_timer_update;
    }

    if (event->timerId() == id_timer_hello)
    {
        //action;
        qDebug() << "First class: timer = 500   | " << id_timer_hello;
        emit signalHello();
        //is_flag_hello_done = !is_flag_hello_done;
    }
}

FirstClass::~FirstClass()
{
    killTimer(id_timer_update);
}

