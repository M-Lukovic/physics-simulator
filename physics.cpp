#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/**
 * Calculates the range and max height of a projectile (basic game physics).
 */

int main() {
    const double GRAVITY = 9.81; // Gravitational constant
    const double PI = 3.14159265;

    double velocity, angle;

    cout << "--- PHYSICS ENGINE SIMULATOR ---" << endl;
    cout << "Enter initial velocity (m/s): ";
    cin >> velocity;
    cout << "Enter launch angle (degrees): ";
    cin >> angle;

    // Convert degrees to radians as C++ math functions use radians
    double radian = angle * (PI / 180.0);

    // Range formula: (v^2 * sin(2 * angle)) / g
    double range = (pow(velocity, 2) * sin(2 * radian)) / GRAVITY;

    // Maximum height formula: (v^2 * sin^2(angle)) / (2 * g)
    double height = (pow(velocity, 2) * pow(sin(radian), 2)) / (2 * GRAVITY);

    cout << fixed << setprecision(2);
    cout << "\n--- SIMULATION RESULTS ---" << endl;
    cout << "Total Distance (Range): " << range << " meters" << endl;
    cout << "Max Height Reached: " << height << " meters" << endl;
    cout << "--------------------------" << endl;

    return 0;
}
