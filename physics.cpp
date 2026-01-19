#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/**
 * Racuna domet i putanju projektila (osnovna mehanika u igrama).
 */

int main() {
    const double GRAVITY = 9.81; // Gravitaciona konstanta
    const double PI = 3.14159265;

    double velocity, angle;

    cout << "--- PHYSICS ENGINE SIMULATOR ---" << endl;
    cout << "Enter initial velocity (m/s): ";
    cin >> velocity;
    cout << "Enter launch angle (degrees): ";
    cin >> angle;

    // Pretvaranje stepeni u radijane jer C++ math koristi radijane
    double radian = angle * (PI / 180.0);

    // Formula za domet: (v^2 * sin(2 * angle)) / g
    double range = (pow(velocity, 2) * sin(2 * radian)) / GRAVITY;

    // Formula za maksimalnu visinu: (v^2 * sin^2(angle)) / (2 * g)
    double height = (pow(velocity, 2) * pow(sin(radian), 2)) / (2 * GRAVITY);

    cout << fixed << setprecision(2);
    cout << "\n--- SIMULATION RESULTS ---" << endl;
    cout << "Total Distance (Range): " << range << " meters" << endl;
    cout << "Max Height Reached: " << height << " meters" << endl;
    cout << "--------------------------" << endl;

    return 0;
}