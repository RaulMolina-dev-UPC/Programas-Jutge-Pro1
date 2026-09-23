#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Ordenamos A, B y C de menor a mayor intercambiando sus valores
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (A > C) {
        int temp = A;
        A = C;
        C = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }

    // Leemos las tres letras individualmente
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    // Imprimimos según la primera letra
    if (c1 == 'A') cout << A;
    else if (c1 == 'B') cout << B;
    else if (c1 == 'C') cout << C;

    cout << " ";

    // Imprimimos según la segunda letra
    if (c2 == 'A') cout << A;
    else if (c2 == 'B') cout << B;
    else if (c2 == 'C') cout << C;

    cout << " ";

    // Imprimimos según la tercera letra
    if (c3 == 'A') cout << A;
    else if (c3 == 'B') cout << B;
    else if (c3 == 'C') cout << C;

    cout << endl;

}