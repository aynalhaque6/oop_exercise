#include <iostream>
using namespace std;

char   minv(char a, char b)     { return (a < b) ? a : b; }
int    minv(int a, int b)       { return (a < b) ? a : b; }
double minv(double a, double b) { return (a < b) ? a : b; }

int main() {
    cout << "min(char): " << minv('z','a') << "\n";
    cout << "min(int): " << minv(10,-5) << "\n";
    cout << "min(double): " << minv(3.14, 2.71) << "\n";
    return 0;
}
