//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
# include <fstream>
# include <cstring>
using namespace std;

class account {
    int custnum;
    char name[80];
    double balance;

public :
    account(int c, char *n, double b) {
        custnum = c;
        strcpy(name, n);
        balance = b;
    }

    friend ostream &operator<<(ostream &stream, account ob);
};

ostream &operator<<(ostream &stream, account ob) {
    stream << ob.custnum << ' ';
    stream << ob.name << ' ' << ob.balance;
    stream << '\n';
    return stream;
}

int main() {
    account Rex(1011, "Ralph Rex", 12323.34);
    ofstream out("accounts", ios::out | ios::binary);
    if (!out) {
        cout << "Cannot open output file.\n";
        return 1;
    }

    out << Rex;
    out.close();
    return 0;
}
