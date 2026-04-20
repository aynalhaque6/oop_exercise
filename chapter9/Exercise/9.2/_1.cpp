//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << " Usage : CPY <input > <output >\n";
        return 1;
    }
    ifstream fin(argv[1]);
    ofstream fout(argv[2]);
    if (!fin) {
        cout << " Cannot open input file .\n";
        return 1;
    }
    if (!fout) {
        cout << " Cannot open output file .\n";
        return 1;
    }
    char ch;
    unsigned count = 0;
    fin.unsetf(ios::skipws);
    while (!fin.eof()) {
        fin >> ch;
        if (!fin.eof()) {
            fout << ch;
            count++;
        }
    }
    cout << " Number of bytes copied : " << count << endl;
    fin.close();
    fout.close();
    return 0;
}
