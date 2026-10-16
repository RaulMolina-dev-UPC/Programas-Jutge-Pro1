#include <iostream>
using namespace std;

int main() {
    int n; //Input variables n = "Rows", n = "Columns"
    int sum_White = 0;
    int sum_Black = 0;
    char num; //num = "number" have to be char because the input of number in the for will be a long number like "1234" without separations
    cin >> n;

    for( int i = 1; i <= n; i++){

        for( int k = 1; k <= n; k++){
            cin >> num;
            
            if( (!(i%2) && !(k%2)) || (i%2 && k%2) ){
                sum_White += (num - '0');

            } else {
                sum_Black += (num - '0');
            }

        }
    }

    cout << sum_White << "-" << sum_Black << " = " << sum_White-sum_Black << endl;
}