#include <iostream>
#include <string>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    double amount, conversion; //Input variable
    string tipe;
    double sum_euro= 0;

    cin >> conversion;
    while( cin >> amount >> tipe){
        if (tipe == "USD"){
            sum_euro += amount/conversion;
        } else if (tipe == "EUR"){
            sum_euro += amount;
        }
    }

    cout << sum_euro << " " << sum_euro * conversion << endl;
}
