//
// Created by aynal on 4/10/26.
//

#include "_1.h"
#include <iostream>
using namespace std;


int &f();

int x;

int main() {
    f() = 100;
    cout << x << "\n";
    return 0;
}

int &f() {
    return x;
}
