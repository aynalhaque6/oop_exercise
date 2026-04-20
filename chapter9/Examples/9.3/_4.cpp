//
// Created by aynal on 4/20/26.
//

#include "_4.h"
# include <iostream>
# include <fstream>
using namespace std;

int main() {
    ifstream in(" test ", ios::in | ios::binary);
    if (!in) {
        cout << " Cannot open input file .\n";
        return 1;
    }
    double num;
    char str[80];
    in.read((char *) &num, sizeof(double));
    in.read(str, 14);
    str[14] = '\0';
    cout << num << ' ' << str << endl;
    in.close();
    return 0;
}
