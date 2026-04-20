//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <new>
using namespace std;
int main (){
    double *p;
    do
    {
        try
        {
            p = new double [100000];
        }
        catch ( bad_alloc xa)
        {
            cout << " Allocation failure .\n";
            return 1;
        }
    }
    while (p);
    return 0;
}