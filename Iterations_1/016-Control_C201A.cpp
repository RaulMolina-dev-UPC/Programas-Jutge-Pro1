#include <iostream>
using namespace std;

int main(){
    int num; //Input variables
    int adder = 0; // adder (+)
    
    cin >> num;
    cout << num; 

    while( num > 0){
        adder += num%10;
        num /= 100;
    
    }

    cout << ((adder%2 == 0) ? " ES TXATXI" : " NO ES TXATXI") << endl;
}