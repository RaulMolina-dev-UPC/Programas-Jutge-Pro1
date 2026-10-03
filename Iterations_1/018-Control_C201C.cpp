#include <iostream>
using namespace std;

int main(){
    int x; // Variable that determines whether the following numbers are multiples or not.
    int index = 0; 
    int number;

    cin >> x;
    
    /* In this program we consider 0 to be a multiple of everything, because 0 % x is always 0,
       so it would count as a multiple. This is necessary because the problem requires handling this edge case. */

    while( cin >> number){
        if( number%x == 0){
            index++;
        }
    }

    cout << index << endl;

}