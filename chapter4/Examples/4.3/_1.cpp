//
// Created by aynal on 4/9/26.
//

#include "_1.h"

#include <cstring>
#include <iostream>
using namespace std;

class inventory {
    char item[20];
    double cost;
    int onHand;

public:
    inventory(char *i, double c, int o) {
        strcpy(item, i);
        cost = c;
        onHand = o;
    }

    void show();
};

void inventory::show() {
    cout << item << endl;
    cout << ": $" << endl;
    cout << "  On Hand " << onHand << endl;
}

int main() {
    inventory inv("Wrench", 5.95, 10);
    inv.show();
    return 0;
}
