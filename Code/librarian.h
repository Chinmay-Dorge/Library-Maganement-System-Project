#ifndef _librarian
#define _librarian
#include <string>
#include "User.h"
using namespace std;
using namespace u;
namespace lib
{
    class librarian : public User
    {
    protected:
        string password;

    public:
        librarian();
        librarian(librarian &li);
        string get_Password();
        void get_User();
    };
}

#endif