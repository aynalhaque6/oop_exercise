//
// Created by aynal on 4/20/26.
//

#include "_1.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;

public:
    strtype(const char *ptr);
    ~strtype() { delete[] p; }
    friend ostream &operator<<(ostream &stream, const strtype &ob);
    friend istream &operator>>(istream &stream, strtype &ob);
};

strtype::strtype(const char *ptr) {
    len = strlen(ptr) + 1;
    p = new char[len];
    if (!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, ptr);
}

ostream &operator<<(ostream &stream, const strtype &ob) {
    stream << ob.p;
    return stream;
}

istream &operator>>(istream &stream, strtype &ob)
{
    char temp[255];
    stream >> temp;
    if(strlen(temp) >= ob.len)
    {
        delete[] ob.p;
        ob.len = strlen(temp) + 1;
        ob.p = new char[ob.len];
        if(!ob.p)
        {
            cout << "Allocation error\n";
            exit(1);
        }
    }
    strcpy(ob.p, temp);
    return stream;
}

int main() {
    strtype s1("This is a test."), s2("I like C++.");
    cout << s1 << endl << s2 << endl;
    cout << "\nEnter a string: ";
    cin >> s1;
    cout << s1 << endl;
    return 0;
}
