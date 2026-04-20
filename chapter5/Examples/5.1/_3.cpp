//
// Created by aynal on 4/20/26.
//

#include "_3.h"
#include <iostream>
# include <cstdio>
using namespace std;

class date {
    int day, month, year;

public :
    date(const char *str);

    date(int m, int d, int y) {
        day = d;
        month = m;
        year = y;
    }

    void show() const {
        cout << month << '/' << day << '/' << year << endl;
    }
};

date::date(const char *str) : day(0), month(0), year(0) {
    sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

int main() {
    date sdate(" 12/31/99 ");
    date idate(12, 31, 99);
    sdate.show();
    idate.show();
    return 0;
}
