//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;

class num {
public :
    int i;

    num(int x) { i = x; }
    virtual void shownum() { cout << i << endl; }
};

class outhex : public num {
public :
    outhex(int n) : num(n) {
    }

    void shownum() { cout << hex << i << endl; }
};

class outoct : public num {
public :
    outoct(int n) : num(n) {
    }

    void shownum() { cout << oct << i << endl; }
};

int main() {
    outoct o(10);
    outhex h(20);
    o.shownum();
    h.shownum();
    return 0;
}
