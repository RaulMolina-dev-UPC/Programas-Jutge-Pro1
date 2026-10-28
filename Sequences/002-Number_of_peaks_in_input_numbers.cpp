#include <iostream>
using namespace std;

int main() {
    int number;
    while(cin >> number){
        int dig_1 = 11; // "fake" but suitable initialitation
        int dig_2 = 11; // "fake" but suitable initialitation
        int dig_3 = 11;
        int index = 0;
        while( number > 0){
            dig_1 = dig_2;
            dig_2 = dig_3;
            dig_3 = number%10;
            number /= 10;
            if( dig_1 < dig_2 && dig_3 < dig_2){
                index++;
            }
            
        }
        cout << index << endl;
    }

}