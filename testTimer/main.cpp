#include <QCoreApplication>
#include "firstclass.h"
#include "secondclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FirstClass* firstClass = new FirstClass();
    SecondClass* secondClass = new SecondClass(firstClass);
    //secondClass->chekStateHello(firstClass->is_flag_hello_done);

    return a.exec();

    if (firstClass != NULL)
    {
        delete firstClass;
    }

    if (secondClass != NULL)
    {
        delete secondClass;
    }
}
