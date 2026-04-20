//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
using namespace std;

int main() {
    bool b;
    cout << " Before setting boolalpha flag : ";
    b = true;
    cout << b << " ";
    b = false;
    cout << b << endl;
    cout << " After setting boolalpha flag : ";
    b = true;
    cout << boolalpha << b << " ";
    b = false;
    cout << b << endl;
    cout << " Enter a Boolean value : ";
    cin >> boolalpha >> b; // you can enter true or false
    cout << "You entered " << b;
    return 0;
}
