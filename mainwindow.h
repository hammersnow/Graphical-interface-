#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QDebug>
#include <QLabel>
#include <QFrame>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_ED28_clicked();
    void on_ED27_clicked();
    void on_ED26_clicked();
    void on_ED25_clicked();
    void on_ED24_clicked();
    void on_ED23_clicked();
    void on_ED20_clicked();
    void on_ED19_clicked();
    void on_ED18_clicked();
    void on_ED17_clicked();
    void on_ED16_clicked();
    void on_ED15_clicked();
    void on_ED14_clicked();
    void on_ED13_clicked();
    void on_ED12_clicked();
    void on_ED11_clicked();
    void on_ED10_clicked();
    void on_ED9_clicked();
    void on_ED6_clicked();
    void on_ED5_clicked();
    void on_ED4_clicked();
    void on_ED3_clicked();
    void on_ED2_clicked();
    void on_ED1_clicked();
};

#endif // MAINWINDOW_H
