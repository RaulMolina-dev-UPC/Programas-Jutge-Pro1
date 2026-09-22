#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2;

    cin >> a1 >> b1 >> a2 >> b2;

    // We check equality first to prevent equal intervals from being
    // classified as one interval containing the other.
    if (a1 == a2 && b1 == b2) {
        cout << "=" << " , " << "[" << a1 << "," << b1 << "]" << endl;
    } else if (a1 >= a2 && b1 <= b2) {
        cout << "1" << " , " << "[" << a1 << "," << b1 << "]" << endl;
    } else if (a1 <= a2 && b1 >= b2) {
        cout << "2" << " , " << "[" << a2 << "," << b2 << "]" << endl;
    } else {
        cout << "?" << " , ";

        if ( b1 < a2 || a1 > b2 ) cout << "[]" << endl; //if one-line
                                                        // we put it inside the else becouse if we dont we will need to repeat code and make more lines
        else if ( a1 < a2 &&  b1 < b2) cout << "[" << a2 << "," << b1 << "]" << endl;
        else if ( a1 > a2 &&  b1 > b2) cout << "[" << a1 << "," << b2 << "]" << endl;

    }

}