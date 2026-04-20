//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
using namespace std;
void f( unsigned char c)
{
    cout << "unsigned char: " << c << endl;
}
void f( char c)
{
    cout << "char: " << c << endl;
}
void f(int i)
{
    cout << "int: " << i << endl;
}
int main ()
{
    f('c');
    f(86);
    return 0;
}