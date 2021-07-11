#include <bits/stdc++.h>
#include <fstream>
#include "member.h"
#include "User.h"
#include "book.h"
using namespace std;
using namespace b;
using namespace m;
using namespace u;
namespace m
{
    Member::Member(Member &me)
    {
        date_of_Membership = me.date_of_Membership;
        NoOFBooksIssued = me.NoOFBooksIssued;
    }

    fstream f1, f2;
    Member r;
    book bo;

    void Member::reqBook()
    {

        f1.open("Member.txt", ios::binary | ios::out);
        f2.open("Book.txt", ios::binary | ios::in);
        int ino;

        cout << "Enter the id of book you want to issue: ";
        cin >> ino;
        int f = 0;
        while (f2.read((char *)&bo, sizeof(bo)))
        {
            if (bo.retBookId() == ino)
            {
                f = 1;
                f1.write((char *)&r, sizeof(r));
                cout << "Book with Id no. " << bo.retBookId() << " has been requested\n";
                cout << "Boook issued\n";
                cout << "Remember to return book within 7 days to avoid fine\n";
                bo.updateStatus();
            }
        }

        if (f == 0)
        {
            cout << "Oops...Book Not Found\n";
            cout << "Cannot Issue Book\n";
        }
        f1.close();
        f2.close();
    }

    void Member::returnBook()
    {
        f1.open("Member.txt", ios::binary | ios::in);
        f2.open("temp.txt", ios::binary | ios::out);
        int ino;
        int dele = 0;

        cout << "Enter the book id of book you want to return: ";
        cin >> ino;
        while (f1.read((char *)&r, sizeof(r)))
        {
            if (bo.retBookId() != ino)
            {
                f2.write((char *)&r, sizeof(r));
                dele++;
            }
        }
        if (dele == 0)
        {
            cout << "Record not found: " << endl;
        }

        else
        {
            cout << "Book returned succesfully";
            NoOFBooksIssued--;
        }

        remove("Member.txt");
        rename("temp.txt", "Member.txt");
        f1.close();
        f2.close();
    }

    void Member::get_User()
    {
        User uobj;
        uobj.get_User();
        cout << "Enter date of membership:- ";
        string s;
        cin >> s;
        date_of_Membership = s;
    }

    Member::Member()
    {
        NoOFBooksIssued = 0;
        date_of_Membership = "1/1/2021";
    }
}
