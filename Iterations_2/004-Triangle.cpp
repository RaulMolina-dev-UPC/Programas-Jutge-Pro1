#include <iostream>
using namespace std;

int main() {
    int n; //Input variables
    cin >> n;
    for(int i = 1; i <= n; i++){
        for( int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }
}