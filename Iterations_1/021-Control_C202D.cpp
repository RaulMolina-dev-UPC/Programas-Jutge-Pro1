#include <iostream>
using namespace std;

int main(){
    int a,b; //input variables
    while( cin >> a >> b){ //We ask for numbers until we dont want any more
        int sum = 0;
        int init_a = a;
        while( a <= b ){
            sum += a*a*a;
            a++;
        }

            cout << "suma dels cubs entre " << init_a << " i " << b << ": " << sum << endl;
    }
}