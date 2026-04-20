//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
using namespace std;

void Xhandler(int test) {
    try {
        if (test == 0)
            throw test; // throw int
        if (test == 1)
            throw 'a'; // throw char
        if (test == 2)
            throw 123.23; // throw double
    } catch (int i) // catch an int exception
    {
        cout << " Caught " << i << endl;
    } catch (...) // catch all other exceptions
    {
        cout << " Caught One !\n";
    }
}

int main() {
    cout << " start \n";
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    cout << "end ";
    return 0;
}
