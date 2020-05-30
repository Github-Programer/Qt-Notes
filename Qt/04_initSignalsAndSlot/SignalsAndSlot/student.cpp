#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent) //构造方法
{

}

void Student::treat() //实现
{
    qDebug() << "请老师吃饭" << endl;
    //实现不需要太复杂，为了练习
}
