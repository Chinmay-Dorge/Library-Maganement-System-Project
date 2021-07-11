#include <bits/stdc++.h>
#include "students.h"
#include "User.h"
#include "member.h"
#include "book.h"
using namespace std;
using namespace m;
using namespace b;
#define fine_per_day 10;
Students::Students()
{
    MaxBookLimit = 2;
}

fstream f1, f2;
Member r;
book bo;
void Students::reqBook()
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
            if (NoOFBooksIssued < MaxBookLimit)
            {
                f1.write((char *)&r, sizeof(r));
                cout << "Book with Id no. " << bo.retBookId() << " has been requested\n";
                cout << "Boook issued\n";
                bo.updateStatus();
            }
            else
            {
                cout << "Maximum book limit reached....Cannot issue books!!!\n";
            }
        }
    }
    if (f == 0)
    {
        cout << "Oops...Book not found\n";
        cout << "Please try for another book\n";
    }
    f1.close();
    f2.close();
}
void Students::calculateFine()
{
    const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                               31, 31, 30, 31, 30, 31};
    cout << "Enter the date of issuing the book\n";
    cout << "Enter day:- ";
    int di;
    cin >> di;
    cout << "Enter month:- ";
    int mi;
    cin >> mi;
    cout << "Enter year:- ";
    int yi;
    cin >> yi;

    cout << "Enter the date of returing the book\n";
    cout << "Enter day:- ";
    int dr;
    cin >> dr;
    cout << "Enter month:- ";
    int mr;
    cin >> mr;
    cout << "Enter year:- ";
    int yr;
    cin >> yr;

    long int d1 = yi * 365 + di;
    for (int i = 0; i < mi - 1; i++)
    {
        d1 += monthDays[i];
    }

    int years1 = yi;
    if (mi <= 2)
    {
        years1--;
    }
    d1 += (years1 / 4) - (years1 / 100) + (years1 / 400);

    long int d2 = yr * 365 + dr;
    for (int i = 0; i < mr - 1; i++)
    {
        d2 += monthDays[i];
    }

    int years2 = yr;
    if (mr <= 2)
    {
        years2--;
    }
    d2 += (years2 / 4) - (years2 / 100) + (years2 / 400);

    int diff = d2 - d1;
    if (diff < 0)
    {
        cout << "Return date cannot be prior to issue date!\n";
        cout << "Errr....Aborting\n";
    }
    else if (diff >= 0 && diff <= 7)
    {
        cout << "You do not have to pay fine since you returned book within 7 days\n";
        cout << "Fine amount:- " << 0 << endl;
        Fine = 0;
    }
    else
    {
        Fine = (diff - 7) * fine_per_day;
        cout << "Fine amount:- " << Fine << endl;
        cout << "Do you want to pay fine now\n";
        char ch;
        cin >> ch;
        if (ch == 'Y' || ch == 'y')
        {
            payFine(Fine);
        }
        else if (ch == 'N' || ch == 'n')
        {
            cout << "Thankyou for using fine portal\n";
        }
    }
}

void Students::payFine(long int a)
{
    cout << "Fine amount recieved:- Rs " << a << endl;
    cout << "Please remember to return book within 7 days of issue for no fine next time :-)\n";
    cout << "Thankyou\n";
}

long Students::get_fine()
{
    return Fine;
}
