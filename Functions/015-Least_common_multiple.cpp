#include <iostream>
using namespace std;

//Pre: a > 0 and b > 0
//Post: Returns the greatest common divisor of a and b
int gcd(int a, int b){
    while( b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
//Pre: a > 0, b > 0
//Post: Returns the least common multiple
int mcm(int a, int b){
    return ((a/gcd(a, b)) * b);
}
int main() {
    int x; //Input variables 

    cin >> x;
    while( x != 0 ){
        int mcm_acumulado;
        int actual;
        cin >> mcm_acumulado;
        for( int i = 1; i < x; i++){
            cin >> actual;
            mcm_acumulado = mcm( mcm_acumulado, actual);
        }
        cout << mcm_acumulado << endl;
        cin >> x;
    }
}