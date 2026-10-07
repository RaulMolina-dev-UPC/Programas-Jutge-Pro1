#include <iostream>
using namespace std;

int main(){
    int n, d, t; //n = initial savings, d = fixed weakly expenses, t = weeks with allowance. Initial varaibles
    cin >> d >> n >> t;

    int balance = n;
    int allowance;
    int index = 0;
    for( int i = 0; i < t; i++){
        cin >> allowance;
        balance += allowance -d;

        if( balance > 0){
            index++;
        }
    }

    cout << index << endl;


}