//
// Created by aynal on 4/20/26.
//

#include "_1.h"
#include <iostream>
using namespace std;

template<class X>
X x_min(X a, X b) {
    if (a <= b)
        return a;
    else
        return b;
}

int main() {
    cout << x_min(12.2, 2.0);
    cout << endl;
    cout << x_min(3, 4);
    cout << endl;
    cout << x_min<char>('c', 'a');
    cout << endl;
    return 0;
}
