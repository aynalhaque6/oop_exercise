//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;
void space(int count) {
    for (; count; count--)
        cout << ' ' << endl;
}

void space(int count, char ch) {
    for (; count; count--)
        cout << ch;
}

int main() {
    void (*fp1)(int);

    void (*fp2)(int, char);
    fp1 = space;
    fp2 = space;
    fp1(22);
    cout << "|\n";
    fp2(30, 'x');
    cout << "|\n";
    return 0;
}
