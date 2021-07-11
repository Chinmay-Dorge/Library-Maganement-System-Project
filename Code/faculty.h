#ifndef __faculty
#define __faculty
#include <bits/stdc++.h>
#include "member.h"
using namespace std;
using namespace m;
class Faculty : public Member
{
private:
    int NoOfBooksIssued;

public:
    Faculty();
    void reqBook();
};
#endif