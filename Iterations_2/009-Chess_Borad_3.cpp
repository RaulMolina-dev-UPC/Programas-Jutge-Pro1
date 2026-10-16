#include <iostream>
using namespace std;

int main() {
    int n; //Input variables n = "Rows", n = "Columns"
    int sum = 0;
    char num; //num = "number" have to be char because the input of number in the for will be a long number like "1234" without separations
    cin >> n;

    for( int i = 0; i < n; i++){

        for( int k = 1; k <= n; k++){
            
            cin >> num;
            if( i == k-1 || k == n-i){
                sum+= (num - '0');

                }
            }
        }
    


    cout << sum << endl;
}