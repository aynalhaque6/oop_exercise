//
// Created by aynal on 4/9/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

class samp {
    int a;
public:
    samp(int n) {
        a = n;
    }

    int getA() {
        return a;
    }
};

int main() {

    samp s[4][2] = {1,2,3,4,5,6,7,8,};

    int i;

    samp *p;
    p = (samp *)s;

    for (i = 0; i < 4; i++) {
        cout << p->getA() << endl;
        p++;
        cout << p->getA() << '\n' << endl;
        p++;
    }


    return 0;
}