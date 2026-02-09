#include <iostream>
#include <string>
using namespace std;

class card {
    string title;
    string author;
    int copies{};
public:
    void store(const string& t, const string& a, int c) {
        title = t;
        author = a;
        copies = c;
    }

    void show() const {
        cout << "Title : " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Copies on hand: " << copies << "\n";
    }
};

int main() {
    card c;
    string title, author;
    int copies;

    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter copies on hand: ";
    cin >> copies;

    c.store(title, author, copies);

    cout << "\n--- Catalog Entry ---\n";
    c.show();

    return 0;
}
