//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    char ch;
    if (argc != 2) {
        cout << " Usage : PR <filename >\n";
        return 1;
    }
    ifstream in(argv[1], ios::in | ios::binary);
    if (!in) {
        cout << " Cannot open file .\n";
        return 1;
    }
    while (!in.eof()) {
        in.get(ch);
        cout << ch;
    }
    in.close();
    return 0;
}
