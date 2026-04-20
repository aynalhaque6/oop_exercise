//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
using namespace std;

template<class X>
class input {
    X data;

public :
    input(char *s, X min, X max);

    // ...
};

template<class X>
input<X>::input(char *s, X min, X max) {
    do {
        cout << s << ": ";
        cin >> data;
    } while (data < min || data > max);
}

int main() {
    input<int> i(" enter int ", 0, 10);
    input<char> c(" enter char ", 'A', 'Z');
    return 0;
}
