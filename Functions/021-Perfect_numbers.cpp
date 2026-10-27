#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: retorna cert si n és un nombre perfecte, fals en cas contrari
bool is_perfect(int n) {
    bool es_perfecte = false;

    if (n > 1) {
        int sum_div = 1;
        
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                sum_div += i;
                if (i * i != n) {
                    sum_div += n / i;
                }
            }
        }
        es_perfecte = (sum_div == n);
    }

    return es_perfecte;
}

int main() {
    int number;
    cin >> number;
    cout << is_perfect(number) << endl;
}