#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int numerador, divisor;
    int numerador_min = 1; // Inicialización ficticia pero adecuada
    int divisor_min = -1; // Inicialización ficticia pero adecuada
    char barra;

    while(cin >> numerador >> barra >> divisor){
        if( numerador_min * divisor > divisor_min * numerador ){
            swap(numerador_min, numerador);
            swap(divisor_min, divisor);
        }
    }

    int gcd_min = gcd(numerador_min, divisor_min);
    while( gcd_min > 1){
        numerador_min /= gcd_min;
        divisor_min /= gcd_min;
        gcd_min = gcd(numerador_min, divisor_min);
    }

    cout << numerador_min << barra << divisor_min << endl;
}   