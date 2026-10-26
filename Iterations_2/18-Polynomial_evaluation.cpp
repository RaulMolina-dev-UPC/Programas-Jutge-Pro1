#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double x, number; //Input variable
    double power = 1;
    bool first_number = true;
    double polynomial = 0;

    cin >> x;

    while ( cin >> number ){ 
        if ( first_number ){
            first_number = false;
        } else {
            power*=x;
        }

        polynomial += number*power;

    }

    cout << polynomial << endl;

}