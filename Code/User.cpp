#include <iostream>
#include <string.h>
#include <fstream>
#include "User.h"
#include "book.h"

using namespace std;
using namespace b;

namespace u
{
    void User::get_User()
    {
        cout << "Enter name:- ";
        string s;
        cin >> s;
        name = s;
        cout << "Enter User_Id:- ";
        int a;
        cin >> a;
        user_id = a;
    }
    void User::Display()
    {
        cout << "The user details are: \n";
        cout << "UserId: " << user_id << endl;
        cout << "Name: " << name << endl;
    }
    void User::SearchBook()
    {
        cout << "Enter book id:- ";
        int s;
        cin >> s;
        book b;
        fstream fin;
        fin.open("Book.txt", ios::in | ios::binary);
        // if (!fin)
        // {
        //     cout << "Err... Could not open file\n";
        // }
        // else
        {
            int f = 0;
            while (fin.read((char *)&b, sizeof(b)))
            {
                if (b.retBookId() == s)
                {
                    cout << "Record Found\n";
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                cout << "Record Not Found\n";
            else
                b.displayDetails();

            fin.close();
        }
    }

    void User::get_name()
    {
        cout << name << " ";
    }

}
