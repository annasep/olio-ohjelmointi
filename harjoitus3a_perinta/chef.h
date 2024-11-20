#ifndef CHEF_H
#define CHEF_H

#include <QObject>
#include <QString>

class Chef : public QObject
{
    Q_OBJECT
public:
    explicit Chef(QObject *parent = nullptr, const QString &name = "");
    ~Chef() override;

public slots:
    void makeSalad();
    void makeSoup();

private:
    QString name;
};

#endif // CHEF_H
