#include <iostream>

using namespace std;

int main(){
    int x, y, z, t; // Starting variables

    cin >> x >> y >> z >> t;

    if ( y < z || t < x){ // This is because we want the intervals to be set well
        cout << "[" << "]" << endl;
    } else if (x <= z && y <= t) {
        cout << "[" << z << "," << y << "]" << endl;

    } else if (x <= z && t <= y ) {
        cout << "[" << z << "," << t << "]" << endl;

    } else if (z <= x && y <= t) {
        cout << "[" << x << "," << y << "]" << endl;

    } else if (z <= x && t <= y) {
        cout << "[" << x << "," << t << "]" << endl;
    } 



}