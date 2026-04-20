//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <cstdlib>
using namespace std;
class dynarray
{
    int *p;
    int size ;
public :
dynarray (int s);
    dynarray & operator =( dynarray &ob);
    int & operator []( int i);
};
// Constructor
dynarray :: dynarray (int s)
{
    p = new int [s];
    if (!p)
    {
        cout << " Allocation error \n";

        exit (1) ;
    }
    size = s;
}
// Overload = for dynarray
dynarray & dynarray :: operator =( dynarray &ob)
{
    int i;
    if( size != ob. size )
    {
        cout << " Cannot copy arrays of differing size !\n";
        exit (1) ;
    }
    for (i = 0; i< size ; i++)
        p[i] = ob.p[i];
    return * this ;
}
// Overload []
int & dynarray :: operator []( int i)
{
    if(i <0 || i> size )
    {
        cout << "\ nIndex value of ";
        cout << i << " is out -of - bounds .\n";
        exit (1) ;
    }
    return p[i];
}
int main ()
{
    int i;
    dynarray ob1 (10) , ob2 (10) , ob3 (100) ;
    ob1 [3] = 10;
    i = ob1 [3];
    cout << i << "\n";
    ob2 = ob1 ;
    i = ob2 [3];
    cout << i << "\n";
    ob1 = ob3 ;

    return 0;
}