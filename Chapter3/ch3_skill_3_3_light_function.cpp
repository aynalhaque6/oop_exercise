#include <iostream>
using namespace std;

class planet {
    int moons;
    double dist_from_sun;
    double diameter;
    double mass;
public:
    planet(int m, double dist, double dia, double ms)
        : moons(m), dist_from_sun(dist), diameter(dia), mass(ms) {}

    double get_miles() const { return dist_from_sun; }
};

double light(planet p) {
    const double SPEED = 186000.0;
    return p.get_miles() / SPEED;
}

int main() {
    planet earth(1, 93000000.0, 7926.0, 1.0);
    cout << "Seconds for light: " << light(earth) << "\n";
    return 0;
}
