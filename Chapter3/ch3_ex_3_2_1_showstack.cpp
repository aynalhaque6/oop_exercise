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

void showstack(stack s) {
    char ch;
    cout << "Stack (top->bottom): ";
    while (s.pop(ch)) cout << ch << " ";
    cout << "\n";
}

int main() {
    stack s;
    s.push('A'); s.push('B'); s.push('C');
    showstack(s);
    showstack(s);
    return 0;
}
