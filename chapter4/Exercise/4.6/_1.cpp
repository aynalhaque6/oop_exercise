//
// Created by aynal on 4/10/26.
//

#include "_1.h"
#include <iostream>
using namespace std;

void rneg(int &i);

void pneg(int *i);

int main() {
    int i = 10;
    int j = 20;
    rneg(i);
    pneg(&j);
    cout << i << ' ' << j << '\n' << endl;
    return 0;
}

void rneg(int &i) {
    i = -i;
}

void pneg(int *i) {
    *i = -*i;
}
