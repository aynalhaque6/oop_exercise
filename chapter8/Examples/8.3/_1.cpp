//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;

int main() {
    cout.width(10); // set minimum filed width
    cout << " hello " << endl; // right - justify by default
    cout.fill('%');
    cout.width(10); // set width
    cout << " hello " << endl; // right - justify default
    cout.setf(ios::left); // left - justify
    cout.width(10); // set width
    cout << " hello " << endl; // output left justified
    cout.width(10); // set width
    cout.precision(10); // set 10 digits of precision
    cout << 123.234567 << endl;
    cout.width(10); // set width
    cout.precision(6); // set 6 digits of precision
    cout << 123.234567 << endl;
    return 0;
}
