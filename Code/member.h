#ifndef _Member
#define _Member

#include <bits/stdc++.h>
#include "User.h"
using namespace std;
using namespace u;
namespace m
{
    class Member : public User
    {
    private:
        string date_of_Membership;

    protected:
        int NoOFBooksIssued;

    public:
        Member();
        Member(Member &me);
        void returnBook();
        virtual void reqBook();
        void get_User();
    };
}
#endif