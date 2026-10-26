#include <iostream>
using namespace std;

int main() {
    long long init_numero; //Input varaibles

    while(cin >> init_numero){
        long long temp, product, op_number; //Iteration Variables
        bool first_time = true;
        op_number = init_numero;

        while(op_number > 9 || first_time){
            
            temp = op_number; //temporal varaible to save the initial value of op_number for later print it
            product = 1;
            while( op_number > 0 || first_time){
                product *= op_number%10;
                op_number /= 10;
                first_time = false;
            }

            cout << "The product of the digits of " << temp << " is " << product << "." << endl;
            op_number = product;
        }
        cout << "----------" << endl;
    }
}