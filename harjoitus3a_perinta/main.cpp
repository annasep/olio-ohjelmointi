#include "chef.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Chef chef(nullptr, "Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    return a.exec();
}
