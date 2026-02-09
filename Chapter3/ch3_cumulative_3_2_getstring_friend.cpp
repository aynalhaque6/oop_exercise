#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
public:
    explicit strtype(const char *s) {
        p = (char*)malloc(strlen(s) + 1);
        if (!p) exit(1);
        strcpy(p, s);
    }
    ~strtype() { free(p); }

    friend const char* getstring(const strtype *obj);
};

const char* getstring(const strtype *obj) {
    return obj->p;
}

int main() {
    strtype s("Hello, friend!");
    cout << getstring(&s) << "\n";
    return 0;
}
