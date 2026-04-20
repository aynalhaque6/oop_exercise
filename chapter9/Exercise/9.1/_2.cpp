//
// Created by aynal on 4/20/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

ostream &sethex(ostream &stream) {
    stream.unsetf(ios::dec | ios::oct);
    stream.setf(ios::hex | ios::uppercase |

                ios::showbase);

    return stream;
}

// Reset flags .
ostream &reset(ostream &stream) {
    stream.unsetf(ios::hex | ios::uppercase |

                  ios::showbase);
    stream.setf(ios::dec);
    return stream;
}

int main() {
    cout << sethex << 100 << endl;
    cout << reset << 100 << endl;
    return 0;
}
