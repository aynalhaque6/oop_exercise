//
// Created by aynal on 4/10/26.
//

#include "_1.h"
# include <iostream>
using namespace std;
int main ()
{
    int x;
    int &ref = x;
    x = 10;
    ref = 10;
    ref = 100;
    cout << x << " "<< ref << "\n";
    return 0;
}