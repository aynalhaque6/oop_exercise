//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <cstdlib>
using namespace std;

class myarray {
    int *p;
    int size;

public :
    myarray(int sz) {
        p = new int[sz];
        if (!p)
            exit(1);
        size = sz;
        cout << " Using ’normal ’ constructor \n" << endl;
    }

    ~ myarray() { delete [] p; }

    myarray(const myarray &a);

    void put(int i, int j) {
        if (i >= 0 && i < size)
            p[i] = j;
    }

    int get(int i) const {
        return p[i];
    }
};

myarray::myarray(const myarray &a) {
    int i;
    size = a.size;
    p = new int[a.size];
    if (!p)
        exit(1);
    for (i = 0; i < a.size; i++)
        p[i] = a.p[i];
    cout << " Using copy constructor \n" << endl;
}

int main() {
    myarray num(10);
    int i;
    for (i = 0; i < 10; i++)
        num.put(i, i);
    for (i = 9; i >= 0; i--)
        cout << num.get(i);
    cout << "\n";

    myarray x = num;
    for (i = 0; i < 10; i++)
        cout << x.get(i);
    return 0;
}
