//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
using namespace std;

class coord {
    int x, y;

public :
    coord() {
        x = 0;
        y = 0;
    }

    coord(int i, int j) {
        x = i;
        y = j;
    }

    friend ostream &operator<<(ostream &stream, const coord &ob);
};

ostream &operator<<(ostream &stream, const coord &ob) {
    stream << ob.x << ", " << ob.y << '\n';
    return stream;
}

int main() {
    coord a(1, 1), b(10, 23);
    cout << a << b;
    return 0;
}
