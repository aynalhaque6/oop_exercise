//
// Created by aynal on 4/20/26.
//

#include "_7.h"
#include <iostream>
using namespace std;

void mag(long &num, long order);

int main() {
    long n = 4;
    long o = 2;
    cout << "4 raised to the 2nd order of magnitude is " << endl;
    mag(n, o);
    cout << n << '\n' << endl;
    return 0;
}


void mag(long &num, long order) {
    for (; order; order--)
        num = num * 10;
}
