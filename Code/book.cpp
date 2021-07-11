#include <bits/stdc++.h>
#include "book.h"
using namespace std;
namespace b
{
    void book::displayDetails()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
    void book::updateStatus()
    {
        if (availability)
        {
            availability == false;
        }
        else
        {
            availability == true;
        }
    }
    book::book(book &bo)
    {
        bookId = bo.bookId;
        author = bo.author;
        title = bo.title;
        price = bo.price;
        availability = bo.availability;
    }
    book::book()
    {
        bookId = 0;
        price = 0;
        availability = true;
        author = "undefined";
        title = "undefined";
    }
    string book::get_book_name()
    {
        return title;
    }

    int book::retBookId()
    {
        return bookId;
    }

    void book::inputDetails()
    {
        cout << "Enter BookId:- ";
        int a;
        cin >> a;
        bookId = a;
        cout << "Enter author's name:- ";
        string s;
        cin >> s;
        author = s;
        cout << "Enter Book name:- ";
        string b;
        cin >> b;
        title = b;
        cout << "Enter book price:- ";
        double c;
        cin >> c;
        price = c;
        availability = true;
    }

    bool book::retavlblty()
    {
        return availability;
    }

}