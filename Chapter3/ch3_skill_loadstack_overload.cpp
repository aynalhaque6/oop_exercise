#include <iostream>
using namespace std;

class stack {
    static const int SIZE = 30;
    char stck[SIZE];
    int tos;
public:
    stack() : tos(0) {}

    bool push(char ch) {
        if (tos == SIZE) return false;
        stck[tos++] = ch;
        return true;
    }
    bool pop(char &out) {
        if (tos == 0) return false;
        out = stck[--tos];
        return true;
    }
};

stack loadstack() {
    stack s;
    for (char c = 'a'; c <= 'z'; c++) s.push(c);
    return s;
}

stack loadstack(int upper) {
    stack s;
    char start = (upper == 1) ? 'A' : 'a';
    char end   = (upper == 1) ? 'Z' : 'z';
    for (char c = start; c <= end; c++) s.push(c);
    return s;
}

void show(stack s) {
    char ch;
    while (s.pop(ch)) cout << ch;
    cout << "\n";
}

int main() {
    stack a = loadstack();
    stack b = loadstack(1);

    cout << "Lowercase (top->bottom): ";
    show(a);

    cout << "Uppercase (top->bottom): ";
    show(b);

    return 0;
}
