#include <iostream>
#include <algorithm>
using namespace std;
int char_to_base64(char c) {
    static char _syms[65] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+/";
    return std::find(_syms, _syms + 64, c) - _syms;
}

int main() {
    int x;
    char c1, c2,c3, c4;
    while(cin >> c1){
        if( c1 != '.'){
            cin >> c2 >> c3 >> c4;
            int d1 = char_to_base64(c1);
            int d2 = char_to_base64(c2);
            int d3 = char_to_base64(c3);
            int d4 = char_to_base64(c4);
            if( c3 == '='&& c4 == '='){
                d3 = 0;
                d4 = 0;
                x = (( d1 * 64 + d2 ) * 64 + d3 ) * 64 + d4;
                int b1 = ((x / 256) / 256) % 256; 
                cout << " " << b1;
            } else if ( c4 == '='){
                d4 = 0;
                x = (( d1 * 64 + d2 ) * 64 + d3 ) * 64 + d4;
                int b2 = (x / 256) % 256;
                int b1 = ((x / 256) / 256) % 256; 
                cout << " " << b1 << " " << b2;     

            } else {
                x = (( d1 * 64 + d2 ) * 64 + d3 ) * 64 + d4;
                int b3 = x % 256;
                int b2 = (x / 256) % 256;
                int b1 = ((x / 256) / 256) % 256; 
                cout << " " <<  b1 << " " << b2 << " " << b3;

            }
        } else {
            cout << endl;
        }
    }
}