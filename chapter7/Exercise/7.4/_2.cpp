//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
using namespace std;

class A {
    int i;

public :
    A(int a) { i = a; }
    void showi() { cout << "i = " << i << endl; }
};

class B {
    int j;

public :
    B(int a) { j = a; }
    void showj() { cout << "j = " << j << endl; }
};

class C : public A, public B {
    int k;

public :
    C(int c, int b, int a) : A(a), B(b) {
        k = c;
    }
    void showk() { cout << "k = " << k << endl; }
};

int main() {
    C ob(3, 2, 1);
    ob.showi();
    ob.showj();
    ob.showk();
    return 0;
}
