#ifndef CALCULATORR_H
#define CALCULATORR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculatorr; }
QT_END_NAMESPACE

class calculatorr : public QMainWindow
{
    Q_OBJECT

public:

    calculatorr(QWidget *parent = nullptr);
       ~calculatorr();
    void managerCalcc(QString buttonText);

private slots:

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_equal_clicked();

    void on_plus_clicked();

    void on_minus_clicked();

    void on_multiply_clicked();

    void on_division_clicked();

private:
    Ui::calculatorr *ui;
    QString Number1 = "";
    QString Number2 = "";
    QString operationPressed="";
    bool Number2Exist = false;
};
#endif // CALCULATORR_H
