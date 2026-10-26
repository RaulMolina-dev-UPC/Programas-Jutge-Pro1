#include <iostream>
using namespace std;
//Pre: n > 0
//Post: Un valor que dice si el numero es potencia de 3

bool es_potencia_de_3(int a){
    int power = 1;
    bool es_potencia_de_3 = false;
    while(power <= a){
        if (power == a) es_potencia_de_3 = true;
        power *= 3;

    }
    return es_potencia_de_3;
}
int main() {
    int numero;
    cin >> numero;
    cout << es_potencia_de_3(numero) << endl;
}