//
// Created by aynal on 4/10/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

void triple(double &num);

int main() {
    double d = 7.0;
    triple(d);
    cout << d << endl;
    return 0;
}

void triple(double &num) {
    num = 3 * num;
}
