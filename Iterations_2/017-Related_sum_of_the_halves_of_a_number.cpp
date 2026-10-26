#include <iostream>
using namespace std;

int main() {
    long long init_l; //Input variable, l its the number
    
    cin >> init_l;

    long long op_l = init_l; //We will use op_l to operete with l
    int digit_count = 0;

    while ( op_l > 0 ){ //It counts the number of digits the number haves
        op_l /= 10;
        digit_count++;
    }

    op_l = init_l; //We reset the value of op_l

    if ( digit_count % 2 != 0 || init_l == 0 ) {
        cout << "nothing" << endl;
        return 0;
    } else {
        long long first_half = 0;
        long long second_half = 0; //In this tho variables we will + the number in each halfes, 1234 -> "12 34"
        for ( int i = 0; i < digit_count; i++){

            if ( i < digit_count/2 ) first_half += op_l%10;
            else second_half += op_l%10;
        
            op_l /= 10;
        }
        char symbol;
        if ( second_half > first_half ) symbol = '>';
        else if ( second_half < first_half ) symbol = '<';
        else symbol = '=';

        cout << second_half << " " << symbol << " " << first_half << endl;

    }

}