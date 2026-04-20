//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
using namespace std;

istream &skipchar(istream &stream) {
    int i;
    char c;
    for (i = 0; i < 10; i++)
        stream >> c;
    return stream;
}

int main() {
    char str[80];
    cout << " Enter some characters : ";
    cin >> skipchar >> str;
    cout << str << endl;
    return 0;
}
