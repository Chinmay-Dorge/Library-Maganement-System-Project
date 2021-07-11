#include <bits/stdc++.h>
#include <ostream>
#include "libraryDatabase.h"
#include "book.h"
#include "textbooks.h"
#include "novels.h"
#include "magzines.h"

using namespace b;
using namespace t;
using namespace nov;
using namespace mag;
using namespace std;

namespace libData
{

    libraryDatabase::libraryDatabase()
    {
        cout << "You are accessing Library Database\n";
    }

    fstream f1, f2;
    book bo;

    void libraryDatabase::addBook()
    {
        f1.open("Book.txt", ios::binary | ios::in | ios::app);
        char choice;
        do
        {
            bo.inputDetails();
            f1.write((char *)&bo, sizeof(bo));
            cout << "Book added succesfully\n";
            cout << "Add more books?(Y/N) ";
            cin >> choice;
        } while (choice == 'Y' || choice == 'y');
        f1.close();
    }

    void libraryDatabase::removeBook()
    {
        int ino, dele = 0;
        cout << "Enter book id of book you want to remove: ";
        cin >> ino;
        f1.open("Book.txt", ios::binary | ios::in | ios::out);
        f2.open("temp.txt", ios::binary | ios::in | ios::out);

        while (f1.read((char *)&bo, sizeof(bo)))
        {
            if (bo.retBookId() != ino)
            {
                f2.write((char *)&bo, sizeof(bo));
                dele++;
            }
        }
        if (!dele)
        {
            cout << endl
                 << "Record not found!\n";
        }
        else
        {
            cout << "Record deleted\n";
        }
        remove("Book.txt");
        rename("temp.txt", "Book.txt");
        f1.close();
        f2.close();
    }

    void libraryDatabase::displayall()
    {
        fstream fin;
        book b;
        fin.open("Book.txt", ios::in | ios::binary);
        while (fin.read((char *)&b, sizeof(b)))
        {
            b.displayDetails();
            cout << endl;
        }
        fin.close();
    }
}
