#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //, ui(new Ui::increaseProgressBar();
{
    ui->setupUi(this);

   
    ui->rad_Butt->setText("RadioButton 1");
    ui->rad_Butt_2->setText("RadioButton 2");

   
    ui->co_Box->addItem("Item 1");
    ui->co_Box->addItem("Item 2");
    ui->co_Box->addItem("Item 3");

   
    ui->push_Butt->setText("Toggle Button");
    ui->push_Butt->setCheckable(true);

   
    ui->pr_Bar->setRange(0, 10);
    ui->pr_Bar->setValue(0);

    
    connect(ui->push_Butt, &QPushButton::clicked, this, &MainWindow::increaseProgressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::increaseProgressBar()
{
    // > значение бара на 10%
    int value = ui->pr_Bar->value() + 1;

    // If значение > 10, бар на 0
    if (value > 10) {
        ui->pr_Bar->setValue(0);
    } else {
        ui->pr_Bar->setValue(value);
    }
}


