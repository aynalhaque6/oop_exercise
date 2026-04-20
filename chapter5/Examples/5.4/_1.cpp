//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;
void f(int a=0 , int b=0)
{
    cout << "a: " << a << ", b: " << b << endl;
}
int main ()
{
    f();
    f (10) ;
    f(10 , 99);
    return 0;
}