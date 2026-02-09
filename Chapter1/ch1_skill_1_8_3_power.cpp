#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b;
    cout << "Enter base and exponent (integers): ";
    cin >> a >> b;

       long long result = 1;
    if (b < 0) {
        cout << "Negative exponent not handled in integer mode.\n";
        return 0;
    }
    for (long long i = 0; i < b; i++) result *= a;

    cout << a << "^" << b << " = " << result << "\n";
    return 0;
}
