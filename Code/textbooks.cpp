#include <bits/stdc++.h>
#include "textbooks.h"
using namespace t;
using namespace std;
void text::displayDetails()
{
    cout << "Book ID: " << bookId << endl;
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
    cout << "For Standard: " << standard << endl;
    cout << "Subject: " << subject << endl;
    cout << "Available: " << availability << endl;
}

void text::inputDetails()
{
    book::inputDetails();
    cout << "Enter standard:- ";
    int a;
    cin >> a;
    standard = a;
    cout << endl;
    cout << "Enter subject:- ";
    string s;
    cin >> s;
    subject = s;
}