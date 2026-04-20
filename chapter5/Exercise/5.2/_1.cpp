//
// Created by aynal on 4/20/26.
//

#include "_1.h"
#include <iostream>
#include <cstdlib>
using namespace std;
class myclass
{
    int *p;

public :
myclass (int i);
    myclass ( const myclass &o);
    ~ myclass () { delete p; }
    friend int getval ( myclass o);
};
myclass :: myclass (int i)
{
    p = new int;
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    *p = i;
}
myclass :: myclass ( const myclass &o)
{
    p = new int;
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    *p = *o.p;
}
int getval ( myclass o)
{
    return *o.p;
}
int main ()
{
    myclass a(1) , b(2) ;
    cout << getval (a) << " " << getval (b);
    cout << "\n";
    cout << getval (a) << " " << getval (b);
    return 0;
}