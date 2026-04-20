//
// Created by aynal on 4/20/26.
//

#include "_1.h"
# include <iostream>
# include <ctime>
using namespace std;

ostream &td(ostream &stream) {
    struct tm *localt;
    time_t t;
    t = time(NULL);
    localt = localtime(&t);
    stream << asctime(localt) << endl;
    return stream;
}

int main() {
    cout << td << endl;
    return 0;
}
