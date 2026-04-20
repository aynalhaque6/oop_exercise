//
// Created by aynal on 4/20/26.
//

#include "_2.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
// Attention :
ostream &atn(ostream &stream) {
    stream << " Attention : ";
    return stream;
}

// Please note :
ostream &note(ostream &stream) {
    stream << " Please Note : ";
    return stream;
}

int main() {
    ofstream out(" test ");
    if (!out) {
        cout << " Cannot open output file .\n";
        return 1;
    }
    // write to screen
    cout << atn << " High voltage circuit \n";
    cout << note << " Turn off all lights \n";
    // write to file
    out << atn << " High voltage circuit \n";
    out << note << " Turn off all lights \n";
    out.close();
    return 0;
}
