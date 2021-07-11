#ifndef _novel
#define _novel
#include "book.h"
#include <string>
using namespace b;
using std::string;
namespace nov
{
    class novel : protected book
    {
    protected:
        string genre;

    public:
        void displayDetails();
        void inputDetails();
    };
}

#endif