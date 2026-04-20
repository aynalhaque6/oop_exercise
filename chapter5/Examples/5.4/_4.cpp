//
// Created by aynal on 4/20/26.
//

#include "_4.h"
#include <iostream>
#include <cctype>
using namespace std;
const int IGNORE = 0;
const int UPPER = 1;
const int LOWER = 2;

void print ( const char *s, int how = -1);
int main ()
{
    print (" Hello There \n", IGNORE );
    print (" Hello There \n", UPPER );
    print (" Hello There \n");
    print (" Hello There \n", LOWER );
    print (" That ’s all\n");
    return 0;
}

void print ( const char *s, int how )
{
    static int oldcase = IGNORE ;
    if(how <0)
        how = oldcase ;
    while (*s)
    {
        switch (how )
        {
            case UPPER : cout << ( char ) toupper (*s);
                break ;
            case LOWER : cout << ( char ) tolower (*s);
                break ;
            default : cout << *s;
        }
        s++;
    }
    oldcase = how ;
}