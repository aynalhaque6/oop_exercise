#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class dice {
    int value;
public:
    dice() : value(1) {}

    void roll() {
        value = (rand() % 6) + 1;
        cout << "Rolled: " << value << "\n";
    }
};

int main() {
    srand((unsigned)time(nullptr));
    dice d;
    d.roll();
    d.roll();
    d.roll();
    return 0;
}
