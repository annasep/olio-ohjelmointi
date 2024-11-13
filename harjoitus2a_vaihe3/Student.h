#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QString>

class Student {
public:
    Student(QString name, int studentNumber, double average);

    QString getName() const;
    int getStudentNumber() const;
    double getAverage() const;

    void setName(const QString& name);
    void setStudentNumber (int studentNumber);
    void setAverage (double average);

private:
    QString name;
    int studentNumber;
    double average;
};
#endif // MAINWINDOW_H
