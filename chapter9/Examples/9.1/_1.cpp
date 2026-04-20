//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;

ostream &setup(ostream &stream) {
    stream.width(10);
    stream.precision(4);
    stream.fill(' *');
    return stream;
}

int main() {
    cout << setup << 123.123456;
    return 0;
}
