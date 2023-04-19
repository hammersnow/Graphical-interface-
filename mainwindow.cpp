#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QProcess"
#include "QDebug"
#include "QLabel"
#include "QMessageBox"
#include "QStyle"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}	


void MainWindow::on_ED1_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.37 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();

}

void MainWindow::on_ED2_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.40 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED3_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.35 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED4_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.36 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED5_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.38 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED6_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.39 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED9_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.25 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED10_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.17 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED11_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.23 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED12_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.22 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED13_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.33 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED14_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.32 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED15_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.20 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED16_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.28 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED17_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.21 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED18_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.26 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED19_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.27 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED20_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.24 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED23_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.44 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED24_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.46 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED25_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.43 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED26_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.45 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED27_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.41 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}

void MainWindow::on_ED28_clicked()
{

    QProcess::startDetached("ssh -qo ConnectTimeout=1 10.1.10.42 ssh -qo ConnectTimeout=1 scc pkill xinit ");
    QMessageBox msgBox;
    msgBox.setText("Done");
    msgBox.setGeometry(900,600,200,200);
    msgBox.exec();
}
