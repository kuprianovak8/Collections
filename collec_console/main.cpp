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

Collections objC;
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
        cout << "4. Изменить данные книги";
        cout << "5. Выбрать номер книги в коллекции"; //просто вывести данные
        cout << "6. Экспорт коллекции в файл";
        cout << "7. Импорт коллекции";
        cout << "8. Выход";
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
        case '3':
        {

        }
        case '4':
        {

        }
        case '5':
        {

        }
        case '6':
        {

        }
        case '7':
        {

        }
        }
    } while (menu != '8');
    return 0;
}
