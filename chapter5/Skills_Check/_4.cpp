//
// Created by aynal on 4/20/26.
//

#include "_4.h"
#include <iostream>
using namespace std;

class samp {
    int x;

public :
    samp(int n) { x = n; }
    int getx() { return x; }
};


int main() {
    samp A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for (i = 0; i < 10; i++)
        cout << A[i].getx() << ' ';
    cout << '\n' << endl;
    return 0;
}
