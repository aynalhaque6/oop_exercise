//
// Created by aynal on 4/20/26.
//

#include "_1_a.h"
# include <iostream>
# include <iomanip>
# include <cmath>
using namespace std;

int main() {
    double x;
    cout.precision(5);
    cout << " x log x ln e\n\n";
    for (x = 2.0; x <= 100.0; x++) {
        cout << setw(10) << x << ' ' << endl;
        cout << setw(10) << log10(10) << ' ' << endl;
        cout << setw(10) << log(x) << endl;
    }
    return 0;
}
