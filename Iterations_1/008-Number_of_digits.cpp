#include <iostream>

using namespace std;

int main(){
    int n; //Input varaible
    int index = 1; // This will count the number of digits

    cin >> n;
    int number = n;

    do {
        n /= 10;

        if (n > 0) {
            index++;
        }

    } while ( n > 0 );

    

    cout << "The number of digits of " << number << " is " << index <<  "." <<  endl;
}