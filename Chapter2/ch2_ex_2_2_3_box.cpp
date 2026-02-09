#include <iostream>
using namespace std;

class box {
    double a, b, c;
    double volume;
public:
    box(double x, double y, double z) : a(x), b(y), c(z), volume(x*y*z) {}

    void vol() const {
        cout << "Box(" << a << ", " << b << ", " << c << ") volume = " << volume << "\n";
    }
};

int main() {
    box b1(2.0, 3.0, 4.0);
    box b2(1.5, 2.5, 3.5);
    b1.vol();
    b2.vol();
    return 0;
}
