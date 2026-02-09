#include <iostream>
#include <cstring>
using namespace std;

void revstr(char s[]) {
    int n = (int)strlen(s);
    for (int i = 0; i < n/2; i++) {
        char tmp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = tmp;
    }
}

void revstr(const char src[], char dst[]) {
    int n = (int)strlen(src);
    for (int i = 0; i < n; i++) dst[i] = src[n-1-i];
    dst[n] = '\0';
}

int main() {
    char s1[80] = "hello";
    char s2[80];

    revstr(s1, s2);
    cout << "Original: hello\n";
    cout << "Reversed into s2: " << s2 << "\n";

    revstr(s1);
    cout << "Reversed in-place s1: " << s1 << "\n";
    return 0;
}
