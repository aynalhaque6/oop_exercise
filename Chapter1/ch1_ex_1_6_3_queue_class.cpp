#include <iostream>
using namespace std;

class queue100 {
    static const int SIZE = 100;
    int q[SIZE]{};
    int head = 0;  // index of next item to remove
    int tail = 0;  // index of next free slot to insert
    int count = 0; // how many items are stored

public:
    bool empty() const { return count == 0; }
    bool full()  const { return count == SIZE; }

    bool put(int v) {
        if (full()) return false;
        q[tail] = v;
        tail = (tail + 1) % SIZE;
        count++;
        return true;
    }

    bool get(int &out) {
        if (empty()) return false;
        out = q[head];
        head = (head + 1) % SIZE;
        count--;
        return true;
    }
};

int main() {
    queue100 q;

    // demo: push 1..10 then pop them
    for (int i = 1; i <= 10; i++) {
        if (!q.put(i)) cout << "Queue is full!\n";
    }

    cout << "Popping values: ";
    int v;
    while (q.get(v)) {
        cout << v << " ";
    }
    cout << "\n";
    return 0;
}
