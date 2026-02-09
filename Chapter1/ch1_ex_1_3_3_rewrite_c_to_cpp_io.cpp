#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int minv = (a > b) ? b : a;
    int d;

    for (d = 2; d < minv; d++) {
        if (a % d == 0 && b % d == 0) break;
    }

    if (d == minv) {
        cout << "No common denominators\n";
        return 0;
    }

    cout << "The lowest common denominator is " << d << "\n";
    return 0;
}
