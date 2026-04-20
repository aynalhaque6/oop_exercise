//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
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
    cout << atn << " High voltage circuit \n";
    cout << note << " Turn off all lights \n";
    return 0;
}
