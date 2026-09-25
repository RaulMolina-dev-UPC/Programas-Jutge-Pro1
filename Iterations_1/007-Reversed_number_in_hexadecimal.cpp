#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    

        if ( num == 0){
            cout << num;
        }

        while (num > 0) {
            int rest = num % 16; //The hexadecimal numer in that position

            if (rest >= 10) {

                cout << (char)(rest + 55); //Print the letter

            } else {

                cout << rest;
            }

            num /= 16; 
        }
        
        cout << endl;
    

}