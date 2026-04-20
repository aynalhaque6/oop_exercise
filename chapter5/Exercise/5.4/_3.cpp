//
// Created by aynal on 4/20/26.
//

#include "_3.h"
#include <iostream>
#include <string>
using namespace std;

string lines[24];
int curx = 0, cury = 0;

void gotoxy(int x, int y) {
    curx = x;
    cury = y;
}

int wherex() {
    return curx;
}

int wherey() {
    return cury;
}

void myclreol(int len = -1);

int main() {
    int i;
    for (i = 0; i < 24; i++)
        lines[i] = " abcdefghijklmnopqrstuvwxyz1234567890 ";

    gotoxy(1, 1);
    for (i = 0; i < 24; i++)
        cout << lines[i] << "\n";

    gotoxy(1, 2);
    myclreol();

    gotoxy(1, 4);
    myclreol(20);

    cout << "\nAfter myclreol operations:\n";
    for (i = 0; i < 6; i++)
        cout << lines[i] << "\n";

    return 0;
}

void myclreol(int len) {
    int x, y;
    x = wherex();
    y = wherey();
    if (len == -1)
        len = 80 - x;

    if (y > 0 && y <= 24) {
        string& line = lines[y - 1];
        for (int i = x - 1; i < len && i < (int)line.length(); i++) {
            line[i] = ' ';
        }
    }
    gotoxy(x, y);
}
