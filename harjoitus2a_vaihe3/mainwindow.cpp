#include "Student.h"

Student::Student(QString name, int studentNumber, double average)
    : name(name), studentNumber(studentNumber), average(average) {}

QString Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

double Student::getAverage() const {
    return average;
}

void Student::setName(const QString& name) {
    this->name = name;
}

void Student::setStudentNumber(int studentNumber) {
    this->studentNumber = studentNumber;
}

void Student::setAverage(double average) {
    this->average = average;
}
