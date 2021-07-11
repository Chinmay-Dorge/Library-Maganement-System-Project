#include <bits/stdc++.h>
#include "novels.h"
using namespace std;
using namespace nov;
void novel::displayDetails()
{
    cout << "Book ID: " << bookId << endl;
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Genre: " << genre << endl;
    cout << "Price: " << price << endl;
    cout << "Available: " << availability << endl;
}

void novel::inputDetails()
{
    book::inputDetails();
    cout << "Enter genre:- ";
    string s;
    cin >> s;
    genre = s;
}