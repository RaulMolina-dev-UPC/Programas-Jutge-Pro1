#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: retorna cert si la suma dels dígits en posicions parelles és igual a la suma dels dígits en posicions senars de n, fals en cas contrari
bool is_balanced(int n){
    int sum_even = 0;
    int sum_odd = 0;
    int index = 1;
    while( n > 0){
        if( index%2 == 0) sum_even += n%10;
        else sum_odd += n%10;
        n /= 10;
        index++;
    }
    return sum_even == sum_odd;
}
int main() {

    int number;
    cin >> number;
    cout << is_balanced(number) << endl;
}