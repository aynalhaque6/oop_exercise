//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <cmath>
using namespace std;

int main() {
    double x;
    cout.precision(4);
    cout << " x sqrt (x) x^2\ n\n";
    for (x = 2.0; x <= 20.0; x++) {
        cout.width(7);
        cout << x << " ";
        cout.width(7);
        cout << sqrt(x) << " ";
        cout.width(7);
        cout << x * x << endl;
    }
    return 0;
}
