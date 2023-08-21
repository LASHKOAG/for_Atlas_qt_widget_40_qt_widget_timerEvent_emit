#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <QObject>
#include <QTimerEvent>
#include <QDebug>

class FirstClass : public QObject
{
    Q_OBJECT
public:
    explicit FirstClass(QObject *parent = nullptr);
    void timerEvent(QTimerEvent* event);
    ~FirstClass();
    bool is_flag_hello_done{false};

private:
    int id_timer_update{-1};
    int id_timer_hello{-1};

signals:
    void signalHello();

public slots:
};

#endif // FIRSTCLASS_H
