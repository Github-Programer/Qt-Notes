#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class myWidget; }
QT_END_NAMESPACE

class myWidget : public QWidget
{
    Q_OBJECT
public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::myWidget *ui;
};
#endif // MYWIDGET_H
