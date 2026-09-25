#include <iostream>
using namespace std;

int main() {
    int n; // Variable de entrada
    int index = 1; // Esto contará el número de cifras

    cin >> n;
    int number = n;

    do {
        n /= 10;

        if (n > 0) {
            index++;
        }

    } while (n > 0);

    cout << "El número de cifras de " << number << " es " << index << "." << endl;
}