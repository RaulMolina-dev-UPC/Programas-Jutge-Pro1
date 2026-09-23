#include <iostream>
using namespace std;

int main(){
    long long a,b; //input variables

    cin >> a >> b;
    if ( a <= b) { //If its == it will only print a
        cout << a;
        for( long long i = a+1; i <= b; i++){

            cout << "," << i;   

            }
           
            cout << endl;

    } else {
        cout << endl;

    }   
}