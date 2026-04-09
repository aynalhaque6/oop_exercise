//
// Created by aynal on 4/10/26.
//

#include "_1.h"
#include <cstring>
#include <iostream>

using namespace std;

class strtype {
    char *p;

public:
    explicit strtype(const char *s);

    ~strtype() {
        delete[] p;
    }
    const char *get() const {
        return p;
    }
};

strtype::strtype(const char *s) {
    int l = static_cast<int>(strlen(s)) + 1;
    p = new char[l];
    strcpy(p, s);
}

void show(const strtype &x) {
    const char *s = x.get();
    cout << s << "\n";
}

int main() {
    strtype a("Hello"), b("There");

    show(a);
    show(b);

    return 0;
}
