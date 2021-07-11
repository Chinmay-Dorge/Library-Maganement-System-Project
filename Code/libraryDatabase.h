#ifndef _libraryDatabase
#define _libraryDatabase
#include <string>
#include "book.h"
using namespace b;
using std::string;
namespace libData
{
    class libraryDatabase : protected book
    {
    protected:
        int numberOfBooks;

    public:
        libraryDatabase();
        void addBook();
        void removeBook();
        void getNo_of_books();
        void displayall();
    };
}
#endif