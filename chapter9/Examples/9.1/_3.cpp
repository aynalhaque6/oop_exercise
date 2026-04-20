//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
# include <cstring>
using namespace std;
istream &getpass(istream &stream) {
    cout << '\a';
    cout << " Enter password : ";
    return stream;
}

int main() {
    char pw[80];
    do {
        cin >> getpass >> pw;
    } while (strcmp(pw, "password") != 0);
    cout << " Logon complete \n";
    return 0;
}
