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
    strtype(const char *ptr);

    ~strtype() { delete [] p; }
    friend ostream &operator<<(ostream &stream, const strtype &ob);
};

strtype::strtype(const char *ptr) {
    len = strlen(ptr) + 1;
    p = new char[len];
    if (!p) {
        cout << " Allocation error \n";
        exit(1);
    }
    strcpy(p, ptr);
}

ostream &operator<<(ostream &stream, const strtype &ob) {
    stream << ob.p;
    return stream;
}

int main() {
    strtype s1(" This is a test ."), s2("I like C++. ");
    cout << s1 << endl << s2 << endl;
    return 0;
}
