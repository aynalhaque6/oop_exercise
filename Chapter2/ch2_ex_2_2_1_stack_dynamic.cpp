#include <iostream>
using namespace std;

class stack {
    char *stck;
    int tos;
    int size;

public:
    explicit stack(int sz) : stck(nullptr), tos(0), size(sz) {
        stck = new char[size];
    }

    ~stack() {
        delete[] stck;
    }

    bool push(char ch) {
        if (tos == size) return false;
        stck[tos++] = ch;
        return true;
    }

    bool pop(char &out) {
        if (tos == 0) return false;
        out = stck[--tos];
        return true;
    }
};

int main() {
    stack s(10);
    s.push('A'); s.push('B'); s.push('C');

    char ch;
    while (s.pop(ch)) cout << ch << " ";
    cout << "\n";
    return 0;
}
