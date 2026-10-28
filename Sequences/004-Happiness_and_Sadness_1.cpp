#include <iostream>
using namespace std;

int main() {
    char c1 = 'f'; // Inicialización ficiticia pero adecuada
    char c2 = 'f'; // Inicialización ficiticia pero adecuada
    char c3 = 'f'; // Inicialización ficiticia pero adecuada
    int index_happy = 0;
    int index_sad = 0;
    while( cin >> c3 ){
        if( (c1 == ':' && c2 == '-' && c3 == ')') || (c1 == '(' && c2 == '-' && c3 == ':') ){
            index_happy++;
        } else if( (c1 == ':' && c2 == '-' && c3 == '(') || (c1 == ')' && c2 == '-' && c3 == ':') ){
            index_sad++;
        }
        c1 = c2;
        c2 = c3;
    }

    cout << index_happy << " " << index_sad << endl;
}