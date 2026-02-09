#include <iostream>
#include <cmath>
using namespace std;

class area_cl {
public:
    double height;
    double width;
    area_cl(double h, double w) : height(h), width(w) {}
};

class rectangle : public area_cl {
public:
    rectangle(double h, double w) : area_cl(h, w) {}
    double area() const { return height * width; }
};

class isosceles : public area_cl {
public:
    isosceles(double h, double base) : area_cl(h, base) {}
    double area() const { return (width * height) / 2.0; }
};

class cylinder : public area_cl {
public:
    cylinder(double h, double diameter) : area_cl(h, diameter) {}
    double area() const {
        double D = width;
        double R = D / 2.0;
        const double pi = 3.14159265358979323846;
        return 2.0 * pi * R * R + pi * D * height;
    }
};

int main() {
    rectangle r(10, 5);
    isosceles t(10, 6);
    cylinder c(10, 4); // height=10, diameter=4

    cout << "Rectangle area: " << r.area() << "\n";
    cout << "Isosceles triangle area: " << t.area() << "\n";
    cout << "Cylinder surface area: " << c.area() << "\n";
    return 0;
}
