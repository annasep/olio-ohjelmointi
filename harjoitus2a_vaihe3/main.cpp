#include "Student.h"
#include <iostream>
#include <memory>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::unique_ptr<Student> student = std::make_unique<Student>("Matti Meikäläinen", 12345, 8.5);


    std::cout << "Nimi: " << student->getName().toStdString() << std::endl;
    std::cout << "Opiskelijanumero: " << student->getStudentNumber() << std::endl;
    std::cout << "Keskiarvo: " << student->getAverage() << std::endl;

    return a.exec();
}
