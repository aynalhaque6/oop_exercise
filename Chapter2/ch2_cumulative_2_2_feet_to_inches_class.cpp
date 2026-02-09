#include <iostream>
using namespace std;

class feet_to_inches {
    double feet;
    double inches;
public:
    explicit feet_to_inches(double f) : feet(f), inches(f * 12.0) {
        cout << feet << " feet = " << inches << " inches\n";
    }
};

int main() {
    double f;
    cout << "Enter feet: ";
    cin >> f;
    feet_to_inches conv(f);
    return 0;
}
