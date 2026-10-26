#include <iostream>
using namespace std;
//Pre: n >= 0
//Post: El factorial del numero a

int factorial(int a){
    int factorial = 1;
    for ( int i = 1; i <= a; i++ ) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;
    cin >> numero;
    cout << factorial(numero) << endl;
}