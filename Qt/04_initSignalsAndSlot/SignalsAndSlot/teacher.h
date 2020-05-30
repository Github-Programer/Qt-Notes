#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    void hungry();

public slots:
    //自定义槽函数

};

#endif // TEACHER_H
