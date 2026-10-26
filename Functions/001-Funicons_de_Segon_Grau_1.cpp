#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    // Fijar el formato de salida a 4 decimales según las indicaciones del problema
    cout.setf(ios::fixed);
    cout.precision(4);

    double a, b, c;
    while (cin >> a >> b >> c) {
        // Cálculo del discriminante
        double d = b * b - 4 * a * c;

        if (d < 0) {
            cout << "sense solucio" << endl;
        } else if (d == 0) {
            double x = -b / (2 * a);
            cout << x << endl;
        } else {
            double x1 = (-b - sqrt(d)) / (2 * a); // Uso de sqrt() de <cmath>
            double x2 = (-b + sqrt(d)) / (2 * a);

                cout << x1 << " " << x2 << endl;
        }
    }
}