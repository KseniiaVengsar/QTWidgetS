#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_push_Butt_toggled(bool checked);

    //void on_push_Butt_clicked();

private:
    Ui::MainWindow *ui;
     void increaseProgressBar();
};
#endif // MAINWINDOW_H
