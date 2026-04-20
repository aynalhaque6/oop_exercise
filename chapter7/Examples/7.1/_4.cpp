//
// Created by aynal on 4/20/26.
//

#include "_4.h"
# include <iostream>
using namespace std;

class base {
    int x;

public :
    void setx(int n) { x = n; }
    void showx() { cout << x << endl; }
};

// Inherit base as private .
class derived : private base {
    int y;

public :
    // setx is accessible from within derived
    void setxy(int n, int m) {
        setx(n);
        y = m;
    }

    // show is accessible from within derived
    void showxy() {
        showx();
        cout << y << endl;
    }
};

int main() {
    derived ob;
    ob.setxy(10, 20);
    ob.showxy();
    return 0;
}
