//
// Created by aynal on 4/20/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

class base
{
protected:
    int x;
public :
    void setx (int n) { x = n; }
    void showx () { cout << x << '\n'; }
};

class derived : public base
{
    int y;
public :
    void sety (int n) { y = n; }
    void show_sum () { cout << x+y << '\n'; }
    void showy () { cout << y << '\n'; }
};

int main() {
    derived d;
    d.setx(10);
    d.sety(20);
    d.showx();
    d.showy();
    d.show_sum();
    return 0;
}
