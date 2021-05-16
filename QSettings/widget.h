#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QColor>
#include<QPushButton>
#include<QList>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Button_1_clicked();

    void on_Button_2_clicked();

    void on_Button_3_clicked();

    void on_Button_4_clicked();

    void on_Button_5_clicked();

    void on_Button_6_clicked();

    void on_Button_7_clicked();

    void on_Button_8_clicked();

    void on_Button_9_clicked();

    void on_SaveColor_clicked();

    void on_LoadColor_clicked();

private:
    Ui::Widget *ui;
    QList<QColor>ColorList;
    //to save color pushbutton

        void SaveColor(QString key,QColor color);

    //To loiad color

        QColor loadColor(QString key);

    //to set loaded color

        void setLoadedColor(QString key,int index,QPushButton *button);


};
#endif // WIDGET_H
