#include <iostream>
using namespace std;

int main() {
    int num; // Variables de entrada

    cin >> num;

    cout << num % 2;
    while (num >= 2) {
        num /= 2;
        cout << num % 2;
    }
    cout << '\n';
}