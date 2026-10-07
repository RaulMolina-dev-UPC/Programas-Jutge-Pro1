#include <iostream>
using namespace std;

int main() {

    int a,b; //Input variables

    while( cin >> a >> b){
        int power = 1;
        for(int i = 0; i < b; i++){
             power *= a;
        }

        cout << power << endl;
    }
}