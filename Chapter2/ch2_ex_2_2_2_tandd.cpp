#include <iostream>
#include <ctime>
using namespace std;

class tandd {
    time_t t;
public:
    explicit tandd(time_t current) : t(current) {}

    void show() const {
        cout << "Current time/date: " << ctime(&t);
    }
};

int main() {
    time_t now = time(nullptr);
    tandd td(now);
    td.show();
    return 0;
}
