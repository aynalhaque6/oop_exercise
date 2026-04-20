//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <fstream>
using namespace std;

class coord {
    int x, y;

public:
    coord(int i, int j) {
        x = i;
        y = j;
    }

    friend ostream &operator<<(ostream &stream, coord ob);
    friend istream &operator>>(istream &stream, coord &ob);
};

ostream &operator<<(ostream &stream, coord ob)
{
    stream << ob.x << ' ' << ob.y << '\n';
    return stream;
}
istream &operator>>(istream &stream, coord &ob)
{
    stream >> ob.x >> ob.y;
    return stream;
}
int main() {
    coord o1(1, 2), o2(3, 4);
    ofstream out("test");
    if (!out) {
        cout << "Cannot open output file.\n";
        return 1;
    }
    out << o1 << o2;
    out.close();
    ifstream in("test");
    if (!in) {
        cout << "Cannot open input file.\n";
        return 1;
    }
    coord o3(0, 0), o4(0, 0);
    in >> o3 >> o4;
    cout << o3 << o4;
    in.close();
    return 0;
}
