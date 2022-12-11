#include <QCoreApplication>
#include <collec.h>

//int main(int argc, char *argv[]) //происходит добавление объектов в хранилище
//{
//    Books objA;
//      objA.setTitle("Voina i mir");
//      objA.setAuthor("Lev Tolstoy");
//      objA.setYear(1867);
//      objA.showBooks();

//    Movies objB;
//      objB.setName("Interstellar");
//      objB.setGenre("Science fiction");
//      objB.setYear(2014);
//      objB.showMovies();

//Collections objC;
//      objC.getBooks();
//      objC.addBook(objA);

//    QCoreApplication a(argc, argv);
//    return a.exec();
//}

int main()
{
    char menu;
    Collections myCollection;
    do {
        cout << "1. Добавить книгу";
        cout << "2. Просмотр книги";
        cout << "3. Список книг";
        cout << "4. Удалить книгу";
        cout << "5. Экспорт коллекции в файл";
        cout << "6. Импорт коллекции";
        cout << "7. Выход";
        cout << endl << "Выберите пункт из меню: ";
        menu = getchar();
        cout << endl;
        switch (menu)
        {
        case '1': //add book
        {
            string title;
            cin >> title;
            myCollection.addBook(title);
            cout << endl << "Книга успешно добавлена в коллекцию";
        }
        case '2': //show book
        {
            long pos;
            cout << "Выберите позицию книги в коллекции: ";
            cin >> pos;
        }
        case '3': //list of books
        {
            //show список коллекции - вывести данные из вектора
        }
        case '4': //delete book
        {
            //функция -> список коллекции
            long pos;
            cout << "Выберите номер книги, которую хотите удалить: ";
            cin >> pos;
            myCollection.delBook(pos);
//            if (book1 != "error") //проверка но для вектора
                cout << "Книга успешно удалена из коллекции" << endl;

        }
        case '5': //export
        {

        }
        case '6': //import
        {

        }
        }
    } while (menu != '7');
    return 0;
}
