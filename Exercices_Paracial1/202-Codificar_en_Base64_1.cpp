/**
 * @brief Passa un valor en base 64 a un caràcter.
 * @pre Precondició: `d` >= 0 i `d` <= 63
 * @post Retorna el valor que representa el numero d en base 10, en base 64
 */
char base64_to_char(int d){
    char c;
    if( d >= 0 && d <= 25){
        c = d + 65;
    } else if ( d >= 26 && d <= 51){
        c = d + 71;
    } else if ( d >= 52 && d <= 61){
        c = d - 4;
    } else if ( d == 62 ){
        c = d - 19;
    } else if( d == 63){
        c = d - 16; 
    }
    return c;
}
#include <iostream>
using namespace std;

int main() {

    cout << base64_to_char(63) << endl;
}
