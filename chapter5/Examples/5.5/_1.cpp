//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;
float f( float i)
{
    return i / 2.0;
}
double f( double i)
{
    return i / 3.0;
}
int f(int i)
{
    return i / 2;
}
int main ()
{
    float x = 10.09;
    double y = 10.09;
    cout << f(x) << endl;
    cout << f(y) << endl;
    cout << f(10) << endl;

    return 0;
}