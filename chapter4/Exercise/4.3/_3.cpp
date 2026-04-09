//
// Created by aynal on 4/9/26.
//

#include "../4.2/_3.h"
#include <iostream>
using namespace std;

class myClass {
    int a, b;

public:
    myClass(int n, int m) {
        a = n;
        b = m;
    }

    int getA() {
        return a;
    }

    int getB() {
        return b;
    }


    int add() {
        return this->a + this->b;
    }

    void show();
};

void myClass::show() {
    int t;
    t = this->add();
    cout << t << '\n' << endl;
}


int main() {
    myClass ob(10, 14);

    ob.show();
    return 0;
}
