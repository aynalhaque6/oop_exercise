#include <iostream>
using namespace std;

int main() {
    double feet;
    while (true) {
        cout << "Enter feet (0 to stop): ";
        cin >> feet;
        if (!cin) return 0;
        if (feet == 0) break;

        double inches = feet * 12.0;
        cout << feet << " feet = " << inches << " inches\n";
    }
    return 0;
}
