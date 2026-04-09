//
// Created by aynal on 4/9/26.
//

#include "_1.h"
#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int;

    if (!p) {
        cout << "Allocation error!" << '\n' << endl;
        return 1;
    }

    *p = 10;


    cout << "Here is integer at p: " << *p << endl;
    delete p;

    return 0;
}
