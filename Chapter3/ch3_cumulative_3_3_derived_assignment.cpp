#include <iostream>
using namespace std;

class base {
    int a;
public:
    void load_a(int n) { a = n; }
    int get_a() const { return a; }
};

class derived : public base {
    int b;
public:
    void load_b(int n) { b = n; }
    int get_b() const { return b; }
};

int main() {
    derived d1, d2;
    d1.load_a(100);
    d1.load_b(200);

    d2.load_a(1);
    d2.load_b(2);

    d2 = d1;
    cout << "After assignment:\n";
    cout << "d2 base a = " << d2.get_a() << "\n";
    cout << "d2 derived b = " << d2.get_b() << "\n";
    return 0;
}
