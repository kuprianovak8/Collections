#ifndef COLLEC_H
#define COLLEC_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class MainInfOfCol
{
private:
    string title;
    string author;
    int year;
public:
    void setMainInf()
    {
        cout << "Введите название: ";
        cin >> title;
        cout << "Введите автора: ";
        cin >> author;
        cout << "Введите год выпуска: ";
        cin >> year;
    }

};

class Books : public MainInfOfCol
{
private:
    //    string title;
    //    string author;
    //    int year;
public:
    vector<string> book1;
    //    string getTitle() {return title;}
    //    string getAuthor() {return author;}
    //    int getYear() {return year;}

    //    void setTitle(string t) {title = t;}
    //    void setAuthor(string a) {author = a;}
    //    void setYear(int y) {year = y;}

    vector<string> setBooks()
    {
        //        vector<string> book1;
        string title;
        string author;
        int year;
        string genre;
        int amount;
        //        setMainInf();
        cout << "Title of book: ";
        cin >> title;
        book1.push_back(title);
        cout << "Author: ";
        cin >> author;
        book1.push_back(author);
        cout << "Year: ";
        cin >> year;
        book1.push_back(to_string(year));
        cout << "Введите жанр: ";
        cin >> genre;
        book1.push_back(genre);
        cout << "Введите количество страниц: ";
        cin >> amount;
        book1.push_back(to_string(year));
        return book1;
    }

    void showBooks()
    {
        book1.data(); //дожно быть books, так как там вся информация
//        int totalSize = books.size()/4;
//            if (pos < 1 || pos > totalSize)
//            {
//                string error = "error";
//                return error;
//            }
//            else
//                return books[(pos - 1) * 4];

        //      cout << "Title: " << title << endl;
        //      cout << "Author: " << author << endl;
        //      cout << "Year: " << year << endl;
    }


};

class Movies
{
private:
    string name;
    string genre;
    int year;

public:
    string getName() {return name;}
    string getGenre() {return genre;}
    int getYear() {return year;}

    void setName(string n) {name = n;}
    void setGenre(string g) {genre = g;}
    void setYear(int y) {year = y;}

    void showMovies()
    {
        cout << "Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Year: " << year << endl;
    }

    void setMovies()
    {
        cin >> name;
        cin >> genre;
        cin >> year;
    }
};

class Collections : public Books
{
private:
    //    vector<string> books;
    vector<string> movies;
public:
    vector<string> books;
    Books objA;
    Movies objB;

    void addBook(vector<string> book1)
    {
        objA.setBooks();
        //        transform(book1.begin(), book1.end(), back_inserter(books));
        //        books.insert();
        //        books.push_back(book1);
    }
    void addFilm() {objB.setMovies();}

    void getBooks() {objA.showBooks();}
    void getFilms() {objB.showMovies();}
};


class collec
{
public:
    collec();
};

#endif // COLLEC_H
