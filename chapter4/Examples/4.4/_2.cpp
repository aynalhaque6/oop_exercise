//
// Created by aynal on 4/9/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

class samp {
    int i, j;

public:
    void setI(int a, int b) {
        i = a;
        j = b;
    }

    int getProduct() {
        return i * j;
    }
};

int main() {
    samp *p;
    p = new samp;
    if (!p) {
        cout << " Allocation error \n" << endl;
        return 1;
    }

    p->setI(5, 6);
    cout << "Product is: " << p->getProduct() << endl;
    return 0;
}
