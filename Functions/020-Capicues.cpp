/* This program I will do it in catalan */

#include <iostream>
using namespace std;
//Pre: n es un integer
//Post: retorna true si el nombre es llegeix igual al reves que normal
bool es_capicua(int n){
    int normal = n;
    int reves = 0;
    while( n > 9){
        reves = (reves + n%10)*10;
        n /= 10;
        
    }
    reves += n%10;
    return normal == reves;
}
int main() {
    int number;
    cin >> number;
    cout << es_capicua(number) << endl;

}