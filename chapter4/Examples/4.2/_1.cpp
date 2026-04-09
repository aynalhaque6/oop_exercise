//
// Created by aynal on 4/9/26.
//

#include "_1.h"
#include <iostream>
using namespace std;

class samp {
    int a, b;

public:
    samp(int n, int m) {
        a = n;
        b = m;
    }

    int getA() {
        return a;
    }

    int getB() {
        return b;
    }
};

int main() {
    samp ob[4] = {samp(1, 2), samp(3, 4), samp(5, 6), samp(7, 8)};

    int i;

    samp *p;
    p = ob;

    for (i = 0; i < 4; i++) {
        cout << ob[i].getA() << ' ' << endl;
        cout << ob[i].getB() << '\n' << endl;
        p++;
    }

    cout << " \n" << endl;

    return 0;
}
