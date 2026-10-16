#include <iostream>
using namespace std;

int main() {
    int r, c; //Input variables r = "Rows", c = "Columns"
    int sum = 0;
    char num; //num = "number" have to be char because the input of number in the for will be a long number like "1234" without separations
    cin >> r >> c;

    for( int i = 1; i <= r; i++){

        for( int k = 1; k <= c; k++){

            cin >> num;

            if( !(i%2) && !( k%2) ){
                sum += (num - '0');
            } else if ( i%2 && k%2 ){
                sum += (num - '0');
            }
        }
    }

    cout << sum << endl;
}