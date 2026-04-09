//
// Created by aynal on 4/10/26.
//

#include "_1.h"

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char *p;

    p = new char[100];

    strcpy(p, "hello");
    std::cout << p << std::endl;
    delete[] p;
    return 0;
}
