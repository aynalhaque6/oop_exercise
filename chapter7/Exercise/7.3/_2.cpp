//
// Created by aynal on 4/20/26.
//

#include "_2.h"
# include <iostream>
using namespace std;

// A base class for various types of vehicles .
class vehicle {
    int num_wheels;
    int range;

public :
    vehicle(int w, int r) {
        num_wheels = w;
        range = r;
    }

    void showv() {
        cout << " Wheels : " << num_wheels << endl;
        cout << " Range : " << range << endl;
    }
};

class car : public vehicle {
    int passengers;

public :
    car(int p, int w, int r) : vehicle(w, r) {
        passengers = p;
    }

    void show() {
        showv();
        cout << " Passengers : " << passengers << endl;
    }
};

class truck : public vehicle {
    int loadlimit;

public :
    truck(int l, int w, int r) : vehicle(w, r) {
        loadlimit = l;
    }

    void show() {
        showv();
        cout << " loadlimit " << loadlimit << endl;
    }
};

int main() {
    car c(5, 4, 500);
    truck t(30000, 12, 1200);
    cout << "Car : \n";
    c.show();
    cout << "\ nTruck :\n";
    t.show();
    return 0;
}
