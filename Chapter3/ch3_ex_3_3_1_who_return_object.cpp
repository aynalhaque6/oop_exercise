#include <iostream>
using namespace std;

class who {
    char id;
public:
    explicit who(char ch) : id(ch) {
        cout << "Constructing who #" << id << "\n";
    }
    who(const who& other) : id(other.id) {
        cout << "Copy-constructing who #" << id << "\n";
    }
    ~who() {
        cout << "Destroying who #" << id << "\n";
    }
};

who make_who(char ch) {
    who temp(ch);
    return temp;
}

int main() {
    who a('A');
    cout << "Calling make_who...\n";
    who b = make_who('B');
    cout << "Done.\n";
    return 0;
}
