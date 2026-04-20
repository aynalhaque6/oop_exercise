//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <cstring>
# include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;

public :
    strtype(const char *s);

    ~ strtype() {
        cout << " Freeing " << (unsigned long) p << endl ;
        delete [] p;
    }

    char *get() { return p; }

    strtype &operator =(const strtype &ob);

    char &operator [](int i);
};

strtype::strtype(const char *s) {
    int l;
    l = strlen(s) + 1;
    p = new char [l];
    if (!p) {
        cout << " Allocation error \n";
        exit(1);
    }
    len = l;
    strcpy(p, s);
}

// Assign an object .
strtype &strtype::operator =(const strtype &ob) {
    // see if more memory is needed
    if (len < ob.len) // need to allocate more memory
    {
        delete [] p;
        p = new char[ob.len];
        if (!p) {
            cout << " Allocation error \n";
            exit(1);
        }
    }    // assign characters using array indexing

    len = ob.len;
    strcpy(p, ob.p);
    return *this;
}

// Index characters in string .
char &strtype::operator [](int i) {
    if (i < 0 || i > len - 1) {
        cout << "\n nIndex value of ";
        cout << i << " is out -of - bounds .\n";
        exit(1);
    }
    return p[i];
}

int main() {
    strtype a(" Hello "), b(" There ");
    cout << a.get() << endl;
    cout << b.get() << endl;
    a = b;
    cout << a.get() << endl;
    cout << b.get() << endl;
    cout << a[0] << a[1] << a[2] << endl;
    a[0] = 'X';
    a[1] = 'Y';
    a[2] = 'Z';
    cout << a.get() << endl;
    return 0;
}
