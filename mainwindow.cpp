#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    stata=0;
    operation="";
    str="0";
    ui->lable_display->setText(str);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_1_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="1";
    else
        str+="1";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_2_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="2";
    else
        str+="2";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_3_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="3";
    else
        str+="3";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_4_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="4";
    else
        str+="4";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_5_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="5";
    else
        str+="5";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_6_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="6";
    else
        str+="6";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_7_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="7";
    else
        str+="7";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_8_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="8";
    else
        str+="8";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_9_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="9";
    else
        str+="9";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_0_clicked()
{
    if(operation=="=")
        str="0";
    if(str=="0")
        str="0";
    else
        str+="0";
    ui->lable_display->setText(str);
}

void MainWindow::on_btn_clear_clicked()
{
    stata=0;
    operation="";
    str="0";
    ui->lable_display->setText(str);
    m.setNum1(0);
    m.setNum2(0);
    m.setSymbol("");
}

void MainWindow::on_btn_add_clicked()
{
    operation=ui->btn_add->text();
    progressControl();
}

void MainWindow::on_btn_sub_clicked()
{
     operation=ui->btn_sub->text();
    progressControl();
}

void MainWindow::on_btn_mul_clicked()
{
    operation=ui->btn_mul->text();
    progressControl();
}

void MainWindow::on_btn_div_clicked()
{
    operation=ui->btn_div->text();
    progressControl();
}

void MainWindow::on_btn_equal_clicked()
{
    operation=ui->btn_equal->text();
    progressControl();
}

void MainWindow::progressControl()
{
    if(stata==0){
        if(operation!="="){
            m.setSymbol(operation);
            m.setNum1(str.toFloat());
            stata=1;
            str="0";
        }
        else{

        }
    }
    else if(stata==1){
        if(operation=="="){
            m.setNum2(str.toFloat());
            str=m.calculator();
            this->ui->lable_display->setText(str);
            stata=0;

        }
        else{
            m.setNum2(str.toFloat());
            str=m.calculator();
            this->ui->lable_display->setText(str);
            m.setNum1(str.toFloat());
            m.setSymbol(operation);
            stata=1;
            str="0";

        }

    }
    else{
        stata=0;

    }
}
