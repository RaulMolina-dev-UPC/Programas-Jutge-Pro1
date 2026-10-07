#include <iostream>
using namespace std;

int main() {
    int number; //Input varaiable
    cin >> number;
    for( int i = 0; i < number; i++){

        for(int k = i+1; k < number; k++){
            cout << "+";
        }
         cout << "/";

        for (int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }
}