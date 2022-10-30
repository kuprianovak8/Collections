#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <form.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBox_accepted()
{
    QWidget* Form = new QWidget;
    Form->setAttribute(Qt::WA_DeleteOnClose,true);
    Form->show();
}


void MainWindow::on_buttonBox_rejected()
{
    close();
}

const std::vector<QString> &Collections::getBooks() const
{
    return Books;
}

const std::vector<QString> &Collections::getMovies() const
{
    return Movies;
}

const std::vector<QString> &Collections::getGames() const
{
    return Games;
}

const std::vector<QString> &Collections::getApplications() const
{
    return Applications;
}
