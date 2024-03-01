#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //, ui(new Ui::increaseProgressBar();
{
    ui->setupUi(this);

    // Устанавливаем имена RadioButton
    ui->rad_Butt->setText("RadioButton 1");
    ui->rad_Butt_2->setText("RadioButton 2");

    // Добавляем элементы в выпадающий список
    ui->co_Box->addItem("Item 1");
    ui->co_Box->addItem("Item 2");
    ui->co_Box->addItem("Item 3");

    // Устанавливаем текст кнопки и ее тип
    ui->push_Butt->setText("Toggle Button");
    ui->push_Butt->setCheckable(true);

    // Устанавливаем начальные значения прогресс-бара
    ui->pr_Bar->setRange(0, 10);
    ui->pr_Bar->setValue(0);

    // Подключаем слот к сигналу нажатия на кнопку
    connect(ui->push_Butt, &QPushButton::clicked, this, &MainWindow::increaseProgressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::increaseProgressBar()
{
    // > значение прогресс-бара на 10%
    int value = ui->pr_Bar->value() + 1;

    // If значение > 10, сбрасываем прогресс-бар на 0
    if (value > 10) {
        ui->pr_Bar->setValue(0);
    } else {
        ui->pr_Bar->setValue(value);
    }
}


