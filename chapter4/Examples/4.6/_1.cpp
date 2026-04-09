//
// Created by aynal on 4/10/26.
//

#include "_1.h"
#include <iostream>
using namespace std;

void swapargs(int &x, int &y);

int main() {
    int i, j;
    i = 10;
    j = 19;
    cout << "i: " << i << ", ";
    cout << "j: " << j << "\n";
    swapargs(i, j);

    cout << " After swapping : ";
    cout << "i: " << i << ", ";
    cout << "j: " << j << "\n";
    return 0;
}

void swapargs(int &x, int &y) {
    int t;
    t = x;
    x = y;
    y = t;
}
