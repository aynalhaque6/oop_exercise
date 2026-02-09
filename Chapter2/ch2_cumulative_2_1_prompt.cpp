#include <iostream>
#include <string>
using namespace std;

class prompt {
    string msg;
    int count;
public:
    prompt(const string& s) : msg(s), count(0) {
        cout << msg;
        cin >> count;
    }

    ~prompt() {
        for (int i = 0; i < count; i++) {
            cout << '\a';
        }
        cout << "\n";
    }
};

int main() {
    prompt p("Enter a count: ");
    cout << "Object will ring bell when it goes out of scope...\n";
    return 0;
}
