#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int numerador, divisior;
    char barra;
    int numerador_max = -1; //Inicialización ficiticia pero adecuada
    int divisor_max = 1; //Inicialización ficiticia pero adecuada 

    while( cin >> numerador >> barra >> divisior ){ 
        if( numerador_max * divisior < divisor_max * numerador) {
            divisor_max = divisior;
            numerador_max = numerador;
        }
    }

    int gcd_max = gcd(numerador_max, divisor_max);
    while( gcd_max > 1){
        numerador_max /= gcd_max;
        divisor_max /= gcd_max;
        gcd_max = gcd(numerador_max, divisor_max);
    }

    cout << numerador_max << barra << divisor_max << endl;
}