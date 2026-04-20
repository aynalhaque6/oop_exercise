//
// Created by aynal on 4/20/26.
//

#include "_4.h"
# include <iostream>
using namespace std;
int f(int a, int b = 0)
{
    if(b == 0)
        return a*a;
    return a*b;
}
int main ()
{
    cout << f(10, 2) << endl;
    cout << f(10) << endl;
    return 0;
}