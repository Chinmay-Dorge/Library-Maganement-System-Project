#include <bits/stdc++.h>
#include "libraryDatabase.h"
#include "book.h"
#include "User.h"
#include "member.h"
#include "textbooks.h"
#include "novels.h"
#include "magzines.h"
#include "students.h"
#include "faculty.h"
#include "librarian.h"

using namespace std;
using namespace libData;
using namespace b;
using namespace t;
using namespace mag;
using namespace nov;
using namespace m;
using namespace lib;

int main()
{
start:
    cout << "****************************************************" << endl;
    cout << setw(40);
    cout << "Library Management System\n";
    cout << "****************************************************" << endl;
    cout << "Welcome\n";
    cout << endl;
    cout << "User Login\n";
    cout << "1. Login as Librarian\n";
    cout << "2. Login as Member\n";
    cout << "3. Exit\n";
    cout << endl;
    cout << "Enter your choice  ";
    char choice1;
    cin >> choice1;
    if (choice1 == '1')
    {
        cout << endl;
        cout << "----------Librarian Login----------" << endl;

        librarian lobj;
        libraryDatabase ldobj;
        lobj.get_User();
    label:
        cout << "Enter Password(Case sensitive) :- ";
        string a;
        cin >> a;
        if (a != lobj.get_Password())
        {
            cout << endl;
            cout << "Err....Wrong password!!!!\n";
            cout << "Kindly Enter again!\n";
            goto label;
        }
        else
        {
            char ch;
            do
            {
                system("clear");
                cout << "----------Librarian Menu----------\n";
                cout << endl;
                cout << "1. Search Book\n";
                cout << "2. Add Book\n";
                cout << "3. Delete Book\n";
                cout << "4. Display All Books\n";
                cout << "5. Exit\n";
                cout << endl;
                cout << "Please enter your choice\n";
                char choice2;
                cin >> choice2;
                if (choice2 == '1')
                {
                    lobj.SearchBook();
                }
                else if (choice2 == '2')
                {
                    ldobj.addBook();
                }
                else if (choice2 == '3')
                {
                    ldobj.removeBook();
                }
                else if (choice2 == '4')
                {
                    ldobj.displayall();
                }
                else if (choice2 == '5')
                {
                    cout << "Thankyou :-)\n";
                    return 0;
                }
                else
                {
                    cout << "Errr.....Wrong Choice!!!!\n";
                }
                cout << endl;
                cout << "Do you want to return back to menu(Y/N)\n";
                cin >> ch;
            } while (ch == 'Y' || ch == 'y');
        }
    }
    else if (choice1 == '2')
    {
        cout << "----------Member Login----------" << endl;

        cout << "You are a:-\n";
        cout << "1. Student\n";
        cout << "2. Faculty\n";
        cout << endl;
        cout << "Enter your choice:- ";
        char ch2;
        cin >> ch2;
        char ch3;
        if (ch2 == '1')
        {
            cout << "Enter Member details:-\n";
            Students sobj;
            sobj.get_User();
            cout << "Hello ";
            cout << endl;
            do
            {
                system("clear");
                cout << "What do you want to do\n";
                cout << "1. Request Book\n";
                cout << "2. Return Book\n";
                cout << "3. Pay Fine\n";
                cout << "4. Exit\n";
                cout << "Enter your choice: ";
                char choice2;
                cin >> choice2;
                if (choice2 == '1')
                {
                    sobj.reqBook();
                }
                else if (choice2 == '2')
                {
                    sobj.returnBook();
                }
                else if (choice2 == '3')
                {
                    sobj.calculateFine();
                }
                else if (choice2 == '4')
                {
                    cout << "Thankyou :-)\n";
                    return 0;
                }
                else
                {
                    cout << "Errr...Wrong choice!!!!\n";
                }
                cout << endl;
                cout << "Do you want to return back to menu(Y/N)";
                cin >> ch3;

            } while (ch3 == 'Y' || ch3 == 'y');
        }
        else if (ch2 == '2')
        {
            Faculty fobj;
            cout << "Enter Member details:-\n";
            fobj.get_User();
            cout << "Hello ";
            cout << endl;
            do
            {
                system("clear");
                cout << "What do you want to do\n";
                cout << "1. Request Book\n";
                cout << "2. Return Book\n";
                cout << "3. Exit\n";
                cout << "Enter your choice: ";
                char choice2;
                cin >> choice2;
                if (choice2 == '1')
                {
                    fobj.reqBook();
                }
                else if (choice2 == '2')
                {
                    fobj.returnBook();
                }
                else if (choice2 == '3')
                {
                    cout << "Thankyou :-)\n";
                    return 0;
                }
                else
                {
                    cout << "Errr...Wrong choice!!!!\n";
                }
                cout << endl;
                cout << "Do you want to return back to menu(Y/N)";
                cin >> ch3;
            } while (ch3 == 'Y' || ch3 == 'y');
        }
    }
    else if (choice1 == '3')
    {
        cout << "Thankyou for using our Library Management System :-)\n";
        cout << "*********************************************************";
        return 0;
    }
    else
    {
        cout << "Err...Wrong choice!!!!!\n";
        goto start;
    }
}