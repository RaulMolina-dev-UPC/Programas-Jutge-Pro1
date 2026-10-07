#include <iostream>
using namespace std;

int main() {
    int base, number;

    while (cin >> base >> number) {
        int index = 0;
        
        while (number > 0) {
            index++;
            number /= base;
        }

        cout << index << endl;
    }
}