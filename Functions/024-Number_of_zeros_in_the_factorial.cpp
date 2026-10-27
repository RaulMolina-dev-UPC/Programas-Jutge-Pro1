#include <iostream>
using namespace std;

//Pre: 0 < x < 10^9
//Post: retorna el nombre de 0 que te el factorial de x
int nzeros_fact(int x){
    int number_of_zeros = 0;
    int power_of_5 = 5;
    
    while (power_of_5 <= x) {
        number_of_zeros += x/power_of_5;
        power_of_5 *= 5;
    }
    return number_of_zeros;
}
int main() {
    int number;
    cin >> number;
    cout << "Number of 0's ---> " << nzeros_fact(number) << endl;

}