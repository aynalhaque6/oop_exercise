//
// Created by aynal on 4/9/26.
//

#include "_1.h"
#include <iostream>
using namespace std;

int main() {
    float *f;
    long *l;
    char *c;

    f = new float;
    l = new long;
    c = new char;


    if (!f || !l || !c) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    *f = 10.102;
    *l = 1000;
    *c = 'A';

    cout << *f << ' ' << *l << ' ' << *c << endl;
    cout << '\n' << endl;
    delete f;
    delete l;
    delete c;

    return 0;
}
