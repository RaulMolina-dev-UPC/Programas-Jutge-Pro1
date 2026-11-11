#include <iostream>
using namespace std;
/**
* @pre c1, c2, c3 in {A, 2, 3, ..., 8, 9, 0, J, Q, K}
* @post Returns "Trio of Aces!", "Trio", "Pair", or 
*       "All cards different" according to c1, c2, and c3.
*/
string poker_hand(char c1, char c2, char c3){
    string text = ""; // Inicialización ficiticia pero adecuada
    if( c1 == c2 && c2 == c3 ){
        if( c1 == 'A'){ //if c1 es A, el resto tambien lo sera
            text = "Trio of Aces!";
        } else {
            text = "Trio"; 
        }
    } else if ( c1 == c2 || c2 == c3 || c1 == c3){
        text = "Pair";
    } else {
        text = "All cards different";
    }

    return text;
}
int main() {


}