#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    int z; //startup variables
    int max;
    int min;

    cin >> x >> y >> z;

    if ( x < y && x < z ) { //We do the comparison, here we see if x is smaller than y and of z at the same time
        min = x;

    } else if ( y < x && y < z ) {
        min = y;

    } else if ( z < x && z < y ) {
        min = z;
    }

    if ( x > y && x > z ) { //We do the comparison, here we see if x is biger than y and of z at the same time
        max = x;

    } else if ( y > x && y > z ) {
        max = y;

    } else if ( z > x && z > y ) {
        max = z;
    }

    int suma = max + min;

    cout << suma << endl;
}