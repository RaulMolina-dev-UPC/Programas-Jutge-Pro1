#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);

    double n; //Count of numbers
    double number;
    double index_1 = 0;
    double index_2 = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> number;
        index_1 += number * number; 
        index_2 += number;
    }
    double oper =(((1)/(n-1)) * index_1) -  (((1)/(n*(n-1)) * (index_2 * index_2)));

    cout << oper  << endl;
}