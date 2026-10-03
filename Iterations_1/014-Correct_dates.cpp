#include <iostream>
using namespace std;

int main() {
    int dd, mm, year;
    int max_days;

    while (cin >> dd >> mm >> year){

        if( mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12){
            max_days = 31;

        } else if ( mm == 4 || mm == 6 || mm == 9 || mm == 11){
            max_days = 30;

        } else if ( mm == 2){
            if((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
            max_days = 29;
            } else {
            max_days = 28;
            }

        } else {
            max_days = 0;
        }

        if( dd >= 1 && dd <= max_days){
            cout << "Data Correcta" << endl;
        } else {
            cout << "Data Incorrecta" << endl;
        }

    }
    
}