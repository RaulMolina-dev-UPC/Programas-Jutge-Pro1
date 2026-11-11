#include <iostream>
using namespace std;

int main() {
    int h, num;
    cin >> h >> num;
    int base;
    int espacios;
    int cantidad_numeros = 1;
    for( int i = 0; i < h; i++){
        base = 2*i +1;
        espacios = h-i-1;
        for(int k = 0; k < espacios; k++){
            cout << " ";
        }
        for( int l = 0; l < cantidad_numeros; l++){
            cout << num%10;
            num +=1;
        }
        cantidad_numeros += 2;
        for(int t = 0; t < espacios; t++){
            cout << " ";
        }
        cout << endl;
    }

}