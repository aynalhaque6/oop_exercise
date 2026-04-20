//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <cmath>
using namespace std;

int main() {
    double x;
    cout.precision(5);
    cout << " x log x ln e\n\n";
    for (x = 2.0; x <= 100.0; x++) {
        cout.width(10);
        cout << x << ' ' << endl;
        cout.width(10);
        cout << log10(10) << ' ' << endl;
        cout.width(10);
        cout << log(x) << endl;
    }
    return 0;
}
