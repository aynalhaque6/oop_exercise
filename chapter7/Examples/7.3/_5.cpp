//
// Created by aynal on 4/20/26.
//

#include "_5.h"
#include <iostream>
using namespace std;

class base {
    int i;

public :
    base(int n) {
        cout << " Constructing base class \n";

        i = n;
    }

    ~ base() { cout << " Destructing base class \n"; }
    void showi() { cout << i << endl; }
};

class derived : public base {
    int j;

public :
    derived(int n) : base(n) // pass arg to base class .
    {
        cout << " Constructing derived class \n";
        j = 0;
    }

    ~ derived() { cout << " Destructing derived class \n"; }
    void showj() { cout << j << endl; }
};

int main() {
    cout << "Creating derived object:\n";
    derived d(10);
    cout << "\nShowing values:\n";
    d.showi();
    d.showj();
    cout << "\nDestructing derived object:\n";
    return 0;
}
