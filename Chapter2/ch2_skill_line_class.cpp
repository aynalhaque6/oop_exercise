#include <iostream>
using namespace std;

class line {
    int len;
public:
    explicit line(int n) : len(n) {
        for (int i = 0; i < len; i++) cout << '*';
        cout << "\n";
    }
};

int main() {
    line (20);
    return 0;
}
