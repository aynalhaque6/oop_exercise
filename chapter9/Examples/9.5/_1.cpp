//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <fstream>
# include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 4) {
        cout << " Usage : CHANGE <filename > <byte > <char >\n";
        return 1;
    }
    fstream out(argv[1], ios::in | ios::out | ios::binary);
    if (!out) {
        cout << " Cannot open file .\n";
        return 1;
    }
    out.seekp(atoi(argv[2]), ios::beg);
    out.put(*argv[3]);
    out.close();
    return 0;
}
