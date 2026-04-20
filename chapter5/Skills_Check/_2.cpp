//
// Created by aynal on 4/20/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

int main() {
    float *f;
    int *i;
    f = new float;
    i = new int;
    if (!f || !i) {
        cout << " Allocation error \n" << endl;
        return 1;
    }
    *f = 10.101;
    *i = 100;
    cout << *f << ' ' << *i << '\n' << endl;
    delete f;
    delete i;

    return 0;
}
