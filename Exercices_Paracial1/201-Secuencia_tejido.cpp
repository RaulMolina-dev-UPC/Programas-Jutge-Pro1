#include <iostream>
using namespace std;

int main() {

    bool es_tejado = true;
    bool primera_vez = true;
    bool subida = true;
    bool bajada = false;
    int index_tejado = 1;
    int index_subida = 0; 
    int primer_numero;
    int numero;
    int numero_prev;
    cin >> numero;
    primer_numero = numero;
    numero_prev = numero;
    while( cin >> numero && es_tejado){
        int diff = numero - numero_prev;
        if(subida){
            if(diff < 0){
                subida = false;
                bajada = true;
                index_subida = index_tejado;
            }
        } else if(bajada){
            if(diff > 0 ){
                bajada = false;
            }
        } else {
            es_tejado = false;
        }
        index_tejado++;
        numero_prev = numero;
    }
    if(es_tejado){
        if( index_tejado%2 == 0 || primer_numero != numero || subida || !bajada || index_tejado-index_subida+1 != index_subida){
        es_tejado = false;
        }
    }

    if(es_tejado) cout << "si" << endl;
    else cout << "no" << endl;
}