//
// Created by aynal on 4/9/26.
//

#include "_3.h"
#include <iostream>
using namespace std;

class letters {
    char ch;

public:
    letters(char c) {
        ch = c;
    }

    char getCh() {
        return ch;
    }
};


int main() {
    letters ob[10] =
    {
        letters('A'),
        letters('B'),
        letters('C'),
        letters('D'),
        letters('E'),
        letters('F'),
        letters('G'),
        letters('H'),
        letters('I'),
        letters('J'),

    };

    int i;

    for (i = 0; i < 10; i++) {
        cout << ob[i].getCh() << endl;
    }

    return 0;
}
