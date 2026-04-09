//
// Created by aynal on 4/10/26.
//

#include "_5.h"
#include <iostream>
using namespace std;

class samp {
    int i, j;

public :
    void set_ij(int a, int b) {
        i = a;
        j = b;
    }

    ~ samp() { cout << " Destroying ...\n"; }
    int getProduct() { return i * j; }
};

int main() {
    samp *p;
    int i;
    p = new samp [10];
    if (!p) {
        cout << " Allocation error \n";
        return 1;
    }
    for (i = 0; i < 10; i++)
        p[i].set_ij(i, i);
    for (i = 0; i < 10; i++) {
        cout << " Product [" << i << "] is: ";
        cout << p[i].getProduct() << "\n";
    }
    delete [] p;
    return 0;
}
