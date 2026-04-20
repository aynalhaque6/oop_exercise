//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <fstream>
# include <cctype>
# include <cstdlib>
using namespace std;

int main() {
    char ch;
    ofstream out(" test ", ios::out | ios::binary);
    if (!out) {
        cout << " Cannot open output file .\n";
        return 1;
    }
    char str[80], *p;
    out << 123 << " this is a test " << 23;
    out << " Hello there !" << 99 << "sdf" << endl;

    out.close();
    ifstream in(" test ", ios::in | ios::binary);
    if (!in) {
        cout << " Cannot open input file .\n";
        return 1;
    }
    do {
        p = str;
        ch = in.peek(); // see what type of char is next
        if (isdigit(ch)) {
            while (isdigit(*p = in.get())) // read integer
                p++;
            in.putback(*p); // return char to stream
            *p = '\0 '; // null - terminate the string
            cout << " Integer : " << atoi(str) << endl;
        } else if (isalpha(ch)) {
            while (isalpha(*p = in.get())) // read a string
                p++;
            in.putback(*p);
            *p = '\0 ';
            cout << " String : " << str << endl;
        } else
            in.get(); // ignore
        cout << endl;
    } while (!in.eof());
    in.close();
    return 0;
}
