#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <iostream>

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
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

class Books
{
private:
    QString title;
    QString author;
    int year;

public:
    QString getTitle() {return title;}
    QString getAuthor() {return author;}
    int getYear() {return year;}

    void setTitle(QString t) {title = t;}
    void setAuthor(QString a) {author = a;}
    void setYear(int y) {year = y;}

    void PrintBook()
    {
//      cout << "Titlte: " << title << endl;
//      cout << "Author: " << author << endl;
//      cout << "Year: " << year << endl;
    }
};

class Movies
{
private:
    QString name;
    QString genre;
    int year;

public:
    QString getName() {return name;}
    QString getGenre() {return genre;}
    int getYear() {return year;}

    void setName(QString n) {name = n;}
    void setGenre(QString g) {genre = g;}
    void setYear(int y) {year = y;}
    void PrintMovies()
    {
//      cout << "Name: " << name << endl;
//      cout << "Genre: " << genre << endl;
//      cout << "Year: " << year << endl;
    }
};

//class Books
//{
//private:
//    QString title;
//    QString author;
//    int year;
//public:
//    void setBooks(QString t, QString a, int y)
//    {
//        title = t;
//        author = a;
//        year = y;
//    }
//};


#endif // MAINWINDOW_H
