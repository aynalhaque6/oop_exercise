//
// Created by aynal on 4/20/26.
//

#include "_2.h"
#include <iostream>
using namespace std;

int main() {
    list *p;
    queue q_ob;
    stack s_ob;
    char ch;
    int i;
    for (i = 0; i < 10; i++) {
        cout << "Stack or Queue? (S/Q): ";
        cin >> ch;
        ch = tolower(ch);
        if (ch == 'q')
            p = &q_ob;
        else
            p = &s_ob;
        p->store(i);
    }
    cout << "Enter T to terminate\n";
    for (;;) {
        cout << "Remove from Stack or Queue? (S/Q): ";
        cin >> ch;
        ch = tolower(ch);
        if (ch == 't')
            break;
        if (ch == 'q')
            p = &q_ob;
        else
            p = &s_ob;
        cout << p->retrieve() << '\n';
    }
    cout << endl;
    return 0;
}
