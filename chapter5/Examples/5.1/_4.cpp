//
// Created by aynal on 4/20/26.
//

#include "_4.h"
#include <iostream>
using namespace std;

class myclass
{
    int x;
public :
myclass () { x = 0; }
    myclass (int n) { x = n; }
    int getx () const { return x; }
};
int main ()
{
    myclass *p;
    myclass ob (10) ;
    p = new myclass [10];
    if (!p)
    {
        cout << " Allocation error \n";
        return 1;
    }
    int i;
    for (i=0; i <10; i++)
        p[i] = ob;
    for (i=0; i <10; i++)
    {
        cout << "p[" << i << "]: " << p[i].getx() << endl;
    }
    delete[] p;
    return 0;
}