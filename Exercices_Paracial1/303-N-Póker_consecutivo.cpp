#include <iostream>
using namespace std;

int main() {
    int n;
    char c, c_prev;
    int index_rep = 0;
    cin >> n;
    bool trobat = false;
    bool first = true;
    while( !trobat && cin >> c){
        if(first){
            c_prev = c;
            first = false;
        }
        if( c == c_prev){
            index_rep++;
    
        } else {
            index_rep = 1;
        }

        if( index_rep == n){
            trobat = true;
        }
        c_prev = c;


    }
    if( trobat ) cout << n << "-Poker de " << c << "!" << endl;
    else cout << "No hay " << n << "-poker" << endl;

}