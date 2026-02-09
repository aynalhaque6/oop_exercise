#include <iostream>
using namespace std;

inline int absv(int x) { return x < 0 ? -x : x; }
inline long absv(long x) { return x < 0 ? -x : x; }
inline double absv(double x) { return x < 0 ? -x : x; }

int main() {
    cout << "abs(int): " << absv(-10) << "\n";
    cout << "abs(long): " << absv(-100000L) << "\n";
    cout << "abs(double): " << absv(-10.01) << "\n";
    return 0;
}
