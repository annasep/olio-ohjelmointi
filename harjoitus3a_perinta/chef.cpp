#include "chef.h"
#include <QDebug>


Chef::Chef(const QString& name) : name(name)
{
    qDebug() << "Chef constructor: " << name;
}

Chef::~Chef()
{
    qDebug() << "Chef destructor: " << name;
}

void Chef::makeSalad()
{
    qDebug() << "Chef" << name << "is making a salad.";
}

void Chef::makeSoup()
{
    qDebug() << "Chef" << name << "is making a soup.";
}
