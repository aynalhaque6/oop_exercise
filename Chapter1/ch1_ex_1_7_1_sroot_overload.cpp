#include <iostream>
#include <cmath>
using namespace std;

double sroot(int x)    { return sqrt(static_cast<double>(x)); }
double sroot(long x)   { return sqrt(static_cast<double>(x)); }
double sroot(double x) { return sqrt(x); }

int main() {
    int a = 81;
    long b = 144L;
    double c = 2.25;

    cout << "sroot(int): " << sroot(a) << "\n";
    cout << "sroot(long): " << sroot(b) << "\n";
    cout << "sroot(double): " << sroot(c) << "\n";
    return 0;
}
