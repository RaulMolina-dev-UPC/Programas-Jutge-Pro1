#include <iostream>
using namespace std;
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
int main() {
    int n;
    while (cin >> n){
        while ( n > 0 ){
            int B1, B2 = 0, B3 = 0;
            cin >> B1;
            if (n >= 3) {
                cin >> B2 >> B3;
            } else if (n == 2) {
                cin >> B2;
            }
            int x = ( B1 * 256 + B2 ) * 256 + B3;

            int d4 = x%64;
            int d3 = (x/64)%64;
            int d2 = ((x/64)/64)%64;
            int d1 = (((x/64)/64)/64)%64;

            char c1, c2, c3, c4 ;
            c1 = base64_to_char(d1);
            c2 = base64_to_char(d2);
            c3 = base64_to_char(d3);
            c4 = base64_to_char(d4);
            if (n == 1) {
                c3 = '=';
                c4 = '=';
            } else if (n == 2) {
                c4 = '=';
            }
            cout << c1 << c2 << c3 << c4;
            n -= 3;
        }
        cout << endl;
    }
}