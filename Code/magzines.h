#ifndef _magzines
#define _magzines
#include <string>
#include "book.h"
using namespace b;
using std::string;
namespace mag
{
    class magzine : protected book
    {
    protected:
        string dateOfPublish;

    public:
        void displayDetails();
        void inputDetails();
    };
}
#endif