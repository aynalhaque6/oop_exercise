//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <fstream>
using namespace std;

int main() {
    ofstream pout(" phone ");
    if (!pout) {
        cout << " Cannot open PHONE file .\n";
        return 1;
    }

    pout << " Isaac Newton 415 555 -3423 \n";
    pout << " Robert Goddard 213 555 -2312 \n";
    pout << " Enrico Fermi 202 555 -1111 \n";
    pout.close();
    return 0;
}
