#include <bits/stdc++.h>
#include "magzines.h"
using namespace std;
using namespace mag;
void magzine::displayDetails()
{
    cout << "Book ID: " << bookId << endl;
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
    cout << "Published on: " << dateOfPublish << endl;
    cout << "Available: " << availability << endl;
}

void magzine::inputDetails()
{
    book::inputDetails();
    cout << "Enter publishing date of magazine:- ";
    string s;
    getline(cin, s);
    dateOfPublish = s;
}