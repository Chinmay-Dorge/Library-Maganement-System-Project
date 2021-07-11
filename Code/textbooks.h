#ifndef _textBook
#define _textBook
#include <string>
#include "book.h"
using namespace b;
using std::string;
namespace t
{
    class text : protected book
    {
        int standard;
        string subject;

    public:
        void displayDetails();
        void inputDetails();
    };
}

#endif