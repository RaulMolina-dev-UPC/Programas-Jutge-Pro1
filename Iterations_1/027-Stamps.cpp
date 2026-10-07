#include <iostream>
using namespace std;

int main() {
    int number; //Input varaible

    while (cin >> number) {
        int index_4 = 0;
        int index_7 = 0; //Index counters

        while (number % 7 != 0) {
            index_4++;
            number -= 4;
        }
        index_7 = number / 7;

        cout << index_7 << " " << index_4 << endl;
    }

    return 0;
}