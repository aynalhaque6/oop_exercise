//
// Created by aynal on 4/20/26.
//

#include "_4.h"
# include <iostream>
using namespace std;
void showflags ();
int main ()
{
    showflags ();
    ios :: fmtflags f = ios :: showpos | ios :: showbase | ios :: oct
    | ios :: right ;
    cout . flags (f); // set flags
    showflags ();
    return 0;
}