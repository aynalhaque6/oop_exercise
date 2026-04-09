//
// Created by aynal on 4/10/26.
//

#include "_3.h"
#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int [5];

    if (!p) {
        cout << " Allocation error \n";
        return 1;
    }
    int i;
    for (i = 0; i < 5; i++)
        p[i] = i;
    for (i = 0; i < 5; i++) {
        cout << " Here is integer at p[" << i << "]: ";
        cout << p[i] << "\n";
    }
    delete [] p;
    return 0;
}
