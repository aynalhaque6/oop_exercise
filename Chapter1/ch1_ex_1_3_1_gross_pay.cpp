#include <iostream>
using namespace std;

int main() {
    double hours, wage;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter hourly wage: ";
    cin >> wage;

    double gross = hours * wage;
    cout << "Gross pay: " << gross << "\n";
    return 0;
}
