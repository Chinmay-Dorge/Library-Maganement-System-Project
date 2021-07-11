#ifndef __students
#define __students
#include <bits/stdc++.h>
#include "member.h"
using namespace std;
using namespace m;
class Students : public Member
{
private:
    int MaxBookLimit;
    long int Fine;

public:
    Students();
    void calculateFine();
    void payFine(long);
    void reqBook();
    long get_fine();
};
#endif