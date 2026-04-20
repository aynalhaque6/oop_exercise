//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
using namespace std;
int f(int a, int b)
{
    cout << "f(int, int): ";
    return a+b;
}
int f(double a, double b)
{
    cout << "f(double, double): ";
    return (int)(a*b);
}
int main ()
{
    int x=1, y=2;

    cout << f(x, y) << endl;

    cout << f(x, 5) << endl;

    const int c = 10;
    cout << f(x, c) << endl;

    return 0;
}