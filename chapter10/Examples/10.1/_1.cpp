//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;

class base {
    int x;

public :
    void setx(int i) { x = i; }
    int getx() { return x; }
};

class derived : public base {
    int y;

public :
    void sety(int i) { y = i; }
    int gety() { return y; }
};

int main() {
    base *p; // pointer to base type
    base b_ob; // object of base
    derived d_ob; // object of derived
    // use p to access base object
    p = &b_ob;
    p->setx(10); // access base object
    cout << " Base object x: " << p->getx() << endl;
    // use p to access derived object
    p = &d_ob; // point to derived object
    p->setx(99); // access derived object
    // can ’t use p to set y, so do it directly
    d_ob.sety(88);
    cout << " Derived object x: " << p->getx() << endl;
    cout << " Derived object y: " << d_ob.gety() << endl;
    return 0;
}
