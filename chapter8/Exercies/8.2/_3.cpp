//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
using namespace std;

int main() {
    ios::fmtflags f;
    f = cout.flags();
    cout.unsetf(ios::dec);
    cout.setf(ios::showbase | ios::hex);
    cout << 100 << endl;
    cout.flags(f);
    return 0;
}
