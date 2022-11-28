#ifndef COLLECTION_H
#define COLLECTION_H

#include <QString>
#include <vector>
#include <iostream>


class Collection
{

private:

    std::vector<QString> books {"Война и мир", "Преcтупление и наказание", "Мастер и Маргарита"};
    std::vector<QString> movies {"Интерстеллар", "Зелёная книга", "Гарри Поттер"};
    std::vector<QString> games {"Скайрим","Ведьмак","CS GO"};
    std::vector<QString> applications {"ReadEra","Photoshop","PhotoMath"};

public:
    Collection();

    //std::vector<QString> get_books

    const std::vector<QString> &getBooks() const;
    void setBooks(const std::vector<QString> &newBooks)
    {
        books = newBooks;
    }
    const std::vector<QString> &getMovies() const;
    void setMovies(const std::vector<QString> &newMovies)
    {
        movies = newMovies;
    }
    const std::vector<QString> &getGames() const;
    void setGames(const std::vector<QString> &newGames)
    {
        games = newGames;
    }
    const std::vector<QString> &getApplications() const;
    void setApplications(const std::vector<QString> &newApplications)
    {
        applications = newApplications;
    }
};

#endif // COLLECTION_H
