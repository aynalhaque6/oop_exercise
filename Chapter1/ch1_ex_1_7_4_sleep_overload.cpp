#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

static void delay_seconds(int seconds) {
    if (seconds <= 0) return;
    clock_t start = clock();
    while (double(clock() - start) / CLOCKS_PER_SEC < seconds) {
    }
}

void sleep_seconds(int seconds) {
    cout << "Sleeping for " << seconds << " seconds...\n";
    delay_seconds(seconds);
}

void sleep_seconds(const string& s) {
    int seconds = atoi(s.c_str());
    sleep_seconds(seconds);
}

int main() {
    sleep_seconds(1);
    sleep_seconds("1");
    cout << "Done.\n";
    return 0;
}
