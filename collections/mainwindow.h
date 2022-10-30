#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <vector>
#include <iostream>
#include <form.h>

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

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

//class Collections
//{

//private:
//    std::vector<QString> books {"Война и мир", "Преcтупление и наказание", "Мастер и Маргарита"};
//    std::vector<QString> movies {"Интерстеллар", "Зелёная книга", "Гарри Поттер"};
//    std::vector<QString> games {"Скайрим","Ведьмак","CS GO"};
//    std::vector<QString> applications {"ReadEra","Photoshop","PhotoMath"};

//    //    std::cout << books.at(2);

//public:


//};

class Collections {

private:
    std::vector<QString> Books{"Война и мир", "Преcтупление и наказание", "Мастер и Маргарита"};
    std::vector<QString> Movies {"Интерстеллар", "Зелёная книга", "Гарри Поттер"};
    std::vector<QString> Games {"Скайрим","Ведьмак","CS GO"};
    std::vector<QString> Applications {"ReadEra","Photoshop","PhotoMath"};

public:
    //std::vector<QString> Get

    const std::vector<QString> &getBooks() const;
    void setBooks(const std::vector<QString> &newBooks);
    const std::vector<QString> &getMovies() const;
    void setMovies(const std::vector<QString> &newMovies);
    const std::vector<QString> &getGames() const;
    void setGames(const std::vector<QString> &newGames);
    const std::vector<QString> &getApplications() const;
    void setApplications(const std::vector<QString> &newApplications);

signals:
    void BooksChanged();
    void MoviesChanged();
    void GamesChanged();
    void ApplicationsChanged();
};

inline void Collections::setBooks(const std::vector<QString> &newBooks)
{
    if (Books == newBooks)
        return;
    Books = newBooks;
    emit BooksChanged();
}

inline void Collections::setMovies(const std::vector<QString> &newMovies)
{
    if (Movies == newMovies)
        return;
    Movies = newMovies;
    emit MoviesChanged();
}

inline void Collections::setGames(const std::vector<QString> &newGames)
{
    if (Games == newGames)
        return;
    Games = newGames;
    emit GamesChanged();
}

inline void Collections::setApplications(const std::vector<QString> &newApplications)
{
    if (Applications == newApplications)
        return;
    Applications = newApplications;
    emit ApplicationsChanged();
}

#endif // MAINWINDOW_H
