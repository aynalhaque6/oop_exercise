//
// Created by aynal on 4/9/26.
//

#include "_1.h"
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
    letters lc[10] = {
        letters('a'),
        letters('b'),
        letters('c'),
        letters('d'),
        letters('e'),
        letters('f'),
        letters('g'),
        letters('h'),
        letters('i'),
        letters('j')
    };

    int i;
    for (i = 0; i < 10; i++) {
        cout << lc[i].getCh() << endl;
    }

    return 0;
}
