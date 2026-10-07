#include <iostream>
using namespace std;

int main() {
    int base, number; //Input variables
    cin >> base;
    while (cin >> number) {
        int sum = 0; 
        int init_number = number; //This is usefull for latter writing down the initial variable
        while (number > 0) { 
            sum += number%base;
            number /= base;

        }
        cout << init_number << ": " << sum << endl;
    }
}