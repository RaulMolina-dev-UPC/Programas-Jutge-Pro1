#include <iostream>
using namespace std;
//Pre: N >= 0
//Post: Retorna el nombre donat la volta, exemple: 123 -> 321
int inverteix_nombre(int n){
    int num_invertit = 0;
    while( n > 0){
        num_invertit = num_invertit * 10 + n%10;
        n /= 10;
    }
    return num_invertit;
}
int main() {
    int number;
    bool trobat = false;
    while ( !trobat && cin >> number ){
        if( number > 99 ){
            if( number == inverteix_nombre(number)){
                trobat = true;
            }
        }
    }

    trobat ? (cout << number << "!" << endl) : (cout << "Res." << endl);
}