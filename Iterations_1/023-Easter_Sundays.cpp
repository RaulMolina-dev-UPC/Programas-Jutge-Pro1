#include <iostream>
using namespace std;

int main() {
    int Y;
    while (cin >> Y) {
        int a = Y / 100;
        int b = Y % 19;
        int c = Y % 4;
        int d = Y % 7;
        int e = a / 4;
        int f = (13 + 8 * a) / 25;
        int g = (15 - f + a - e) % 30;
        int h = (19 * b + g) % 30;
        int i = (4 + a - e) % 7;
        int j = (2 * c + 4 * d + 6 * h + i) % 7; // We use the variables declared in the exercise.

        int D, M;
        // The if statements are written this way because the exercise statement defines them this way.
        if (h + j <= 9) { // We use the formula from the exercise.
            D = 22 + h + j;
            M = 3;
        } else if (h == 29 && j == 6) {
            D = 19;
            M = 4;
        } else if (h == 28 && j == 6 && b > 10) {
            D = 18;
            M = 4;
        } else {
            D = h + j - 9;
            M = 4;
        }

        cout << D << "/" << M << endl;
    }
}