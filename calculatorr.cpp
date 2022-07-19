#include "calculatorr.h"
#include "ui_calculatorr.h"

calculatorr::calculatorr(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculatorr)
{
    ui->setupUi(this);
}

calculatorr::~calculatorr()
{
    delete ui;
}

void calculatorr::managerCalcc(QString buttonText)
{
    if(operationPressed == "")
    {
        Number1=buttonText;
        ui->lineEdit_1->setText(Number1);
    }
    else
    {
        Number2=buttonText;
        Number2Exist=true;
        ui->lineEdit_1->setText(ui->lineEdit_1->text()+Number2);
    }
}


void calculatorr::on_pushButton_1_clicked()
{
     managerCalcc(ui->pushButton_1->text());
}

void calculatorr::on_pushButton_2_clicked()
{
     managerCalcc(ui->pushButton_2->text());
}


void calculatorr::on_pushButton_3_clicked()
{
     managerCalcc(ui->pushButton_3->text());
}

void calculatorr::on_pushButton_4_clicked()
{
     managerCalcc(ui->pushButton_4->text());
}

void calculatorr::on_pushButton_5_clicked()
{
     managerCalcc(ui->pushButton_5->text());
}

void calculatorr::on_pushButton_6_clicked()
{
     managerCalcc(ui->pushButton_6->text());
}

void calculatorr::on_pushButton_7_clicked()
{
     managerCalcc(ui->pushButton_7->text());
}

void calculatorr::on_pushButton_8_clicked()
{
     managerCalcc(ui->pushButton_8->text());
}

void calculatorr::on_pushButton_9_clicked()
{
     managerCalcc(ui->pushButton_9->text());
}

void calculatorr::on_pushButton_0_clicked()
{
     managerCalcc(ui->pushButton_0->text());
}

void calculatorr::on_equal_clicked(){

if(operationPressed == "")
{
    Number1="";
    Number2="";
    operationPressed="";
    Number2Exist=false;
    ui->lineEdit_1->setText("ERROR : No operation");
}

if(!Number2Exist)
{
    Number1="";
    Number2="";
    operationPressed="";
    Number2Exist=false;
    ui->lineEdit_1->setText("ERROR : No second number given");
}


if(operationPressed =="+")
{
    ui->lineEdit_1->setText(QString::number(Number1.toInt() + Number2.toInt()));
}

else if(operationPressed=="-")
{
    ui->lineEdit_1->setText(QString::number(Number1.toInt() - Number2.toInt()));
}

else if(operationPressed=="x")
{
    ui->lineEdit_1->setText(QString::number(Number1.toInt() * Number2.toInt()));
}

else{
      if(Number2=="0")
        {
            Number1="";
            Number2="";
            operationPressed="";
            Number2Exist=false;
             return;
          }

            ui->lineEdit_1->setText(QString::number(Number1.toInt()/Number2.toInt()));
            Number1="";
            Number2="";
            operationPressed="";
            Number2Exist=false;
    }
}

void calculatorr::on_plus_clicked()
{
    if(operationPressed =="")
        {
            operationPressed = ui->plus->text();
            ui->lineEdit_1->setText(ui->lineEdit_1->text()+operationPressed);
        }
    else
    {
       Number1="";
        Number2="";
        operationPressed="";
        Number2Exist=false;
        ui->lineEdit_1->setText("Error: you cannot use multiple operations");
    }
}


void calculatorr::on_minus_clicked()
{
    if(operationPressed ==""){
            operationPressed =ui->minus->text();
            ui->lineEdit_1->setText(ui->lineEdit_1->text()+operationPressed);
        }
    else
    {
        Number1="";
        Number2="";
        operationPressed="";
        Number2Exist=false;
        ui->lineEdit_1->setText("Error: you cannot use multiple operations");
    }
}


void calculatorr::on_multiply_clicked()
{
    if(operationPressed ==""){
            operationPressed = ui->multiply->text();
            ui->lineEdit_1->setText(ui->lineEdit_1->text()+operationPressed);
        }
    else
 {
       Number1="";
        Number2="";
        operationPressed="";
        Number2Exist=false;
        ui->lineEdit_1->setText("Error: you cannot use multiple operations");
    }
}


void calculatorr::on_division_clicked()
{
    if(operationPressed ==""){
            operationPressed = ui->division->text();
            ui->lineEdit_1->setText(ui->lineEdit_1->text()+operationPressed);
        }
    else
    {
        Number1="";
        Number2="";
        operationPressed="";
        Number2Exist=false;
        ui->lineEdit_1->setText("Error: you cannot use multiple operations");
    }

}
