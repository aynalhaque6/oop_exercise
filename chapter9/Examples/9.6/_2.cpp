//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    char ch;
    if (argc != 2) {
        cout << " Usage : PR <filename >\n";
        return 1;
    }
    ifstream in(argv[1]);
    if (!in) {
        cout << " Cannot open input file .\n";
        return 1;
    }
    while (!in.eof()) {
        in.get(ch);
        // check for error
        if (!in.good() && !in.eof()) {
            cout << "I/O Error ... terminating \n";
            return 1;
        }
        cout << ch;
    }
    in.close();
    return 0;
}
