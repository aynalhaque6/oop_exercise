//
// Created by aynal on 4/9/26.
//

#include "_2.h"

#include <cstring>
#include <iostream>
using namespace std;

class phone {
    char name[40];
    char number[14];

public:
    void store(char *n, char *num);

    void show();
};

void phone::store(char *n, char *num) {
    strcpy(name, n);
    strcpy(number, num);
}

void phone::show() {
    cout << name << ": " << number << endl;
}

int main() {
    phone *p;
    p = new phone();
    if (!p) {
        cout << "Allocation error." << endl;
        return 1;
    }

    p->store("Isaac Newton", "123-456-7890");
    p->show();
    delete p;

    return 0;
}
