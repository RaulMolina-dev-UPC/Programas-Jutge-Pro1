#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2;

    cin >> a1 >> b1 >> a2 >> b2;

    // We check equality first to prevent equal intervals from being
    // classified as one interval containing the other.
    if (a1 == a2 && b1 == b2) {
        cout << "=" << endl;
    } else if (a1 >= a2 && b1 <= b2) {
        cout << "1" << endl;
    } else if (a1 <= a2 && b1 >= b2) {
        cout << "2" << endl;
    } else {
        cout << "?" << endl;
    }
}
