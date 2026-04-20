//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;
class samp
{
    // private by default
    int a;
protected : // still private relative to samp
int b;
public :
int c;
    samp (int n, int m) { a = n; b = m; }
    int geta () { return a; }
    int getb () { return b; }
};
int main ()
{
    samp ob (10 , 10) ;
    // ob.b = 99; Error ! b is protected and thus private
    ob.c = 30; // OK , c is public
    cout << ob. geta () << endl;
    cout << ob. getb () << ' ' << ob.c << endl;
    return 0;
}