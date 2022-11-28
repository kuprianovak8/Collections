#include "collection.h"
using namespace std;

const std::vector<QString> &Collection::getBooks() const
{
    //QString books = b;
    cout << "Книги: " << endl;
    return books;
}

const std::vector<QString> &Collection::getMovies() const
{
    return movies;
}

const std::vector<QString> &Collection::getGames() const
{
    return games;
}

const std::vector<QString> &Collection::getApplications() const
{
    return applications;
}

Collection::Collection()
{

}
