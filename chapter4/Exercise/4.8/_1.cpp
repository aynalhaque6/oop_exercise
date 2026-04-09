//
// Created by aynal on 4/10/26.
//

#include "_1.h"
#include <cstdlib>
#include <iostream>

class array {
    int isize, jsize;
    int *p;

public:
    array(int i, int j);
    ~array() { delete[] p; }
    int &put(int i, int j);
    int get(int i, int j) const;
};

array::array(int i, int j) {
    isize = i;
    jsize = j;
    p = new int[i * j];
}

int &array::put(int i, int j) {
    if (i < 0 || i >= isize || j < 0 || j >= jsize) {
        std::cout << "Bounds error!!!\n";
        std::exit(1);
    }
    return p[i * jsize + j];
}

int array::get(int i, int j) const {
    if (i < 0 || i >= isize || j < 0 || j >= jsize) {
        std::cout << "Bounds error!!!\n";
        std::exit(1);
    }
    return p[i * jsize + j];
}

int main() {
    array a(2, 3);
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            a.put(i, j) = i * j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            std::cout << a.get(i, j) << " ";

    a.put(10, 10);
    return 0;
}
