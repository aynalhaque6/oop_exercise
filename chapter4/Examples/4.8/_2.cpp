//
// Created by aynal on 4/10/26.
//

#include "_2.h"
#include <cstdlib>
#include <iostream>

class array {
    int size;
    char *p;

public:
    explicit array(int num);
    ~array() { delete[] p; }
    char &put(int i);
    char get(int i) const;
};

array::array(int num) {
    p = new char[num];
    size = num;
}

char &array::put(int i) {
    if (i < 0 || i >= size) {
        std::cout << "Bounds error!!!\n";
        std::exit(1);
    }
    return p[i];
}

char array::get(int i) const {
    if (i < 0 || i >= size) {
        std::cout << "Bounds error!!!\n";
        std::exit(1);
    }
    return p[i];
}

int main() {
    array a(10);
    a.put(3) = 'X';
    a.put(2) = 'R';
    std::cout << a.get(3) << a.get(2) << "\n";
    a.put(11) = '!';
    return 0;
}
