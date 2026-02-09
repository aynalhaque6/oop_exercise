#include <iostream>
using namespace std;

class stack {
    char stck[100];
    int tos;

public:
    stack() : tos(0) {}
    bool push(char ch) {
        if (tos == 100) return false;
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
    stack s;
    s.push('a'); s.push('b'); s.push('c');

    char ch;
    while (s.pop(ch)) cout << ch << " ";
    cout << "\n";
    return 0;
}
