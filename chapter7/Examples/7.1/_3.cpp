//
// Created by aynal on 4/20/26.
//

#include "_3.h"
# include <iostream>
using namespace std;

class base {
    int x;

public :
    void setx(int n) { x = n; }
    void showx() { cout << x << endl; }
};

// Inherit base as private .
class derived : private base {
    int y;

public :
    void sety(int n) { y = n; }
    void showy() { cout << y << endl ; }
    void setx_public(int n) { setx(n); }
    void showx_public() { showx(); }
};

int main() {
    derived ob;
    ob.setx_public(10);
    ob.sety(20);
    ob.showx_public();
    ob.showy();
    return 0;
}
