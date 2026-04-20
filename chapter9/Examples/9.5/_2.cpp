//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <fstream>
# include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    char ch;
    if (argc != 3) {
        cout << " Usage : LOCATE <filename > <loc >\n";
        return 1;
    }
    ifstream in(argv[1], ios::in | ios::binary);
    if (!in) {
        cout << " Cannot open input file .\n";
        return 1;
    }
    in.seekg(atoi(argv[2]), ios::beg);

    while (!in.eof()) {
        in.get(ch);
        cout << ch;
    }
    in.close();
    return 0;
}
