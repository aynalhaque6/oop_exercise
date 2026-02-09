#include <iostream>
using namespace std;

class queue100 {
    static const int SIZE = 100;
    int q[SIZE]{};
    int head, tail, count;

public:
    queue100() : head(0), tail(0), count(0) {}

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
    for (int i = 1; i <= 5; i++) q.put(i);

    int v;
    cout << "Queue output: ";
    while (q.get(v)) cout << v << " ";
    cout << "\n";
    return 0;
}
