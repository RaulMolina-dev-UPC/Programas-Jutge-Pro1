#include <iostream>
using namespace std;

int main(){
    int x, y; //Input variables
    
    cin >> x >> y;

    if( y > x){
        int temp = y;
        y = x;
        x = temp;

    } //If y is larger, swap the values so the loop can always count down from x to y.

    for(int i = x; i >= y; i--){
        cout << i << endl;
    }
}   