#include <bits/stdc++.h>
#include "faculty.h"
#include "User.h"
using namespace std;

Faculty::Faculty()
{
    NoOfBooksIssued = 0;
}
void Faculty::reqBook()
{
    Member::reqBook();
}
