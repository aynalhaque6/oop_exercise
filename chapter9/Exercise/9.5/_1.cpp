//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << " Usage : REVERSE <filename >\n";
        return 1;
    }
    ifstream in(argv[1], ios::in | ios::binary);
    if (!in) {
        cout << " Cannot open input file .\n";
        return 1;
    }
    char ch;
    long i;
    in.seekg(0, ios::end);
    i = (long) in.tellg();
    i -= 2;
    for (; i >= 0; i --) {
        in.seekg(i, ios::beg);
        in.get(ch);
        cout << ch;
    }
    in.close();

    return 0;
}
