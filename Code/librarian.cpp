#include <bits/stdc++.h>
#include "librarian.h"
#include "libraryDatabase.h"
#include "book.h"
#include "User.h"

using namespace u;
using namespace std;
using namespace lib;
using namespace libData;
using namespace b;

librarian::librarian(librarian &li)
{
    password = li.password;
}
librarian::librarian()
{
    password = "administrator";
}
string librarian::get_Password()
{
    return password;
}
void librarian::get_User()
{
    User::get_User();
}
