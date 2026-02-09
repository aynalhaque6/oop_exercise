#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    union swapper {
        uint16_t value;
        unsigned char b[2];
    } u;

    u.value = 0x1234; // example

    cout << "Before swap: 0x" << hex << u.value << "\n";

    unsigned char tmp = u.b[0];
    u.b[0] = u.b[1];
    u.b[1] = tmp;

    cout << "After swap : 0x" << hex << u.value << "\n";
    return 0;
}
