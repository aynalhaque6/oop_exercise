//
// Created by aynal on 4/20/26.
//

#include "_1.h"
#include <iostream>
using namespace std;

int main() {
    // display using default settings
    cout << 123.23 << " hello " << 100 << endl;
    cout << 10 << ' ' << -10 << endl;
    cout << 100.0 << "\n\n";
    // now , change formats
    cout.unsetf(ios::dec); // not required by all compilers
    cout.setf(ios::hex | ios::scientific);
    cout << 123.23 << " hello " << 100 << endl;
    cout.setf(ios::showpos);
    cout << 10 << ' ' << -10 << endl;
    cout.setf(ios::showpoint | ios::fixed);
    cout << 100.0;
    return 0;
}
