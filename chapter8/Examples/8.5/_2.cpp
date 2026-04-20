//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
using namespace std;

class coord {
public :
    int x, y; // must be public
    coord() {
        x = 0;
        y = 0;
    }

    coord(int i, int j) {
        x = i;
        y = j;
    }
};

// An inserter for the coord class.
ostream &operator<<(ostream &stream, const coord &ob) {
    stream << ob.x << ", " << ob.y << '\n';
    return stream;
}

int main() {
    coord a(1, 1), b(10, 23);
    cout << a << b;
    return 0;
}
