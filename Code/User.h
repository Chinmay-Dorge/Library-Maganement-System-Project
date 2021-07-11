#pragma once
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
namespace u
{
    class User
    {
    private:
        int user_id;
        string name;

    public:
        virtual void get_User();
        void get_name();
        void Display();
        void SearchBook();
    };
}
