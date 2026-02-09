#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;

public:
    strtype(const char *s) {
        len = (int)strlen(s);
        p = (char*)malloc(len + 1);
        if (!p) exit(1);
        strcpy(p, s);
    }

    strtype(const strtype& other) {
        len = other.len;
        p = (char*)malloc(len + 1);
        if (!p) exit(1);
        strcpy(p, other.p);
    }

    strtype& operator=(const strtype& other) {
        if (this == &other) return *this;
        free(p);
        len = other.len;
        p = (char*)malloc(len + 1);
        if (!p) exit(1);
        strcpy(p, other.p);
        return *this;
    }

    ~strtype() { free(p); }

    void show() const { cout << p << "\n"; }
};

int main() {
    strtype a("hello");
    strtype b("world");
    b = a;
    a.show();
    b.show();
    return 0;
}
