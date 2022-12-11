#include "collec.h"

collec::collec()
{

}

void Collections::addBook()
{
    vector<string> book1 = objA.setBooks();
    //        transform(book1.begin(), book1.end(), back_inserter(books));
    //        books.insert();
//                books.push_back(book1);
}

string Collections::getBook(long pos)
{
    int totalSize = books.size() / 4;
        if (pos < 1 || pos > totalSize)
        {
            string error = "error";
            return error;
        }
        else
            return books[(pos - 1) * 4];
}

string Collections::delBook(long pos)
{
    string title = getBook(pos);
            if (title != "error")
            {
            string elem = getBook(pos);
            for(int i = -1; i < 3; i++)
            books.erase(books.begin() + (pos + i) * 4);
            return elem;
            }
            else
            return title;
}
