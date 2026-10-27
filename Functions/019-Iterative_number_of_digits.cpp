#include <iostream>
using namespace std;

//Pre: An integer
//Post: Returns  the number of digits "n" have
int number_of_digits(int n){
    int index = 1;
    while( n > 9 ){
        n /= 10;
        index++;
        
    }
    return index;
}

int main() {
    int number;
    cin >> number;
    cout << number_of_digits(number) << endl;

}