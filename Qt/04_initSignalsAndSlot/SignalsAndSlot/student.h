#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:
    //自定义信号
public slots:
    //自定义槽函数
    void treat(); //声明请客函数
};

#endif // STUDENT_H
