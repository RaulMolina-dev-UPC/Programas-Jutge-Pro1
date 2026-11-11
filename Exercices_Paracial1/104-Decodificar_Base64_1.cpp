#include <iostream>
using namespace std;

/**
 * @brief Passa un caràcter que representa un dígit en base 64 al seu
 * valor corresponent
 *
 * @pre Precondició: c és una lletra, un dígit decimal, o bé `+` o `/`
 * @post Retorna el valor en base 10 de c
 */
int char_to_base64(char c){
    int number_10;
    if( c >= 'A' && c <= 'Z'){
        number_10 = c - 65;
    } else if ( c >= 'a' && c <= 'z'){
        number_10 = c - 71;
    } else if ( c >= '0' && c <= '9'){
        number_10 = c + 4;
    } else if ( c == '+'){
        number_10 = 62;
    } else if ( c == '/'){
        number_10 = 63;
    }
    return number_10;
}
int main() {


}