#include <QCoreApplication>
#include <collection.h>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Collection obj;
    obj.getBooks();
    obj.getGames();



    return a.exec();
}
