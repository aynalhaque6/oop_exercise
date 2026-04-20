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
        cout << " Usage : WRITE <filename >\n";
        return 1;
    }
    ofstream out(argv[1], ios::out | ios::binary);
    if (!out) {
        cout << " Cannot open file .\n";

        return 1;
    }
    cout << " Enter a $ to stop \n";
    do {
        cout << ": ";
        cin.get(ch);
        out.put(ch);
    } while (ch != '$');
    out.close();
    return 0;
}
