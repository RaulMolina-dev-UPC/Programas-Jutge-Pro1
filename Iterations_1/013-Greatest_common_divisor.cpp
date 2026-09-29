#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int lower, bigger;

    if (a <= b) {
        lower = a;
        bigger = b;
    } else {
        lower = b;
        bigger = a;
    }


    while (lower != 0) {
        int r = bigger % lower;
        bigger = lower;
        lower = r;
    }

    cout << "The gcd of " << a << " and " << b << " is " << bigger << "." << endl;

}