//
// Created by aynal on 4/20/26.
//

#include "_2.h"
#include <iostream>
#include <cstring>
using namespace std;

class inventory {
    char item[40];
    int onhand;
    double cost;

public:
    inventory(const char *i, int o, double c) {
        strcpy(item, i);
        onhand = o;
        cost = c;
    }

    friend ostream &operator<<(ostream &stream, const inventory &ob);
    friend istream &operator>>(istream &stream, inventory &ob);
};

ostream &operator<<(ostream &stream, const inventory &ob)
{
    stream << ob.item << ": " << ob.onhand;
    stream << " on hand at $" << ob.cost << "\n";
    return stream;
}

istream &operator>>(istream &stream, inventory &ob)
{
    cout << "Enter item name: ";
    stream >> ob.item;
    cout << "Enter number on hand: ";
    stream >> ob.onhand;
    cout << "Enter cost: ";
    stream >> ob.cost;
    return stream;
}

int main() {
    inventory ob("hammer", 4, 12.55);
    cout << ob;
    cin >> ob;
    cout << ob;
    return 0;
}
