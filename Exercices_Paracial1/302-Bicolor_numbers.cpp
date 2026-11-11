#include <iostream>
using namespace std;
/**
* @pre n >= 0
* @post retorna cierto si n es bicolor, falso en caso contrario
* @post 
*/
bool is_bicolor(int n){
    int d, e, digit;
    bool ans = false; //Inicialicación ficticia pero adecuada
    bool salir = false;
    bool primer_cambio = true;
    d = n%10;
    n /= 10;

    while( n > 0 && !salir ){
        digit = n%10;
        if(primer_cambio){
            if( d != digit ){
                primer_cambio = false;
                e = digit;
            }
        } else if (!primer_cambio){
            if( e != digit ){
                salir = true;
            }
        }
        n /= 10;
    }
    if(!salir && !primer_cambio) ans = true;
    return ans;
}
int main() {

cout << is_bicolor(7722) << endl;
}