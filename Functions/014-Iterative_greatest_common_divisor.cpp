#include <iostream>
using namespace std;

//Pre: "a" y "b" son mayores que 0, y un es estrictamente mayor que 0
//Post: Devuelve "a" que esel resultado de hacer el gcd entre "a" y "b"

int gcd(int a, int b){
    while ( b != 0 ) {
        int r = a%b;
        a = b;
        b = r;

    }
    return a;
}

int main() {
    int x, y; //Input varaibles
    cin >> x >>  y;
    cout << gcd(x,y) << endl;
}