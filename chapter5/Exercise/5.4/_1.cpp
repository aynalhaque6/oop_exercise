//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <cstdlib>
using namespace std;

long mystrtol(const char *s, char **end, int base = 10) {
    return strtol(s, end, base);
}

int main() {
    long x;
    char *s1 = " 100234 ";
    char *p;
    x = mystrtol(s1, &p, 16);
    cout << " Base 16: " << x << endl;
    x = mystrtol(s1, &p, 10);
    cout << " Base 10: " << x << endl;
    x = mystrtol(s1, &p); // use default base of 10
    cout << " Base 10: " << x << endl;
    return 0;
}
