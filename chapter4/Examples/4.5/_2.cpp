//
// Created by aynal on 4/10/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

class samp {
    int i, j;

public :
    samp(int a, int b) {
        i = a;
        j = b;
    }

    int getProduct() { return i * j; }
};

int main() {
    samp *p;
    p = new samp(6, 5);
    if (!p) {
        cout << " Allocation error \n";
        return 1;
    }
    cout << " Product is: " << p->getProduct() << "\n";
    delete p;
    return 0;
}
