//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
using namespace std;

class base {
protected :
    int a, b;

public :
    void setab(int n, int m) {
        a = n;
        b = m;
    }
};

class derived : protected base {
    int c;

public :
    void setab_public(int n, int m) { setab(n, m); }
    void setc(int n) { c = n; }

    void showabc() {
        cout << a << ' ' << b << ' ' << c << endl;
    }
};

int main() {
    derived ob;
    ob.setab_public(1, 2);
    ob.setc(3);
    ob.showabc();
    return 0;
}
