#include <iostream>

using namespace std;

int main(){
    int a1, b1, a2, b2; // Starting variables

    cin >> a1 >> b1 >> a2 >> b2;

    if ( b1 < a2 || b2 < a1){ // This is because we want the intervals to be set well
        cout << "[" << "]" << endl;
    } else if (a1 <= a2 && b1 <= b2) {
        cout << "[" << a2 << "," << b1 << "]" << endl;

    } else if (a1 <= a2 && b2 <= b1 ) {
        cout << "[" << a2 << "," << b2 << "]" << endl;
    } else if (a2 <= a1 && b1 <= b2) {
        cout << "[" << a1 << "," << b1 << "]" << endl;

    } else if (a2 <= a1 && b2 <= b1) {
        cout << "[" << a1 << "," << b2 << "]" << endl;
    } 



}