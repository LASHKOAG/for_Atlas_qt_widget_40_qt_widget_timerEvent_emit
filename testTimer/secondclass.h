#ifndef SECONDCLASS_H
#define SECONDCLASS_H

#include <QObject>
#include <QTimerEvent>
#include <QDebug>



class SecondClass : public QObject
{
    Q_OBJECT
public:
    explicit SecondClass(QObject *parent = nullptr);
    void timerEvent(QTimerEvent* event);
//    void chekStateHello(bool _flag);
    void chekStateHello();

private:
    int id_timer_one_sec{-1};

signals:
    void signalOneSec();

public slots:
};

#endif // SECONDCLASS_H
