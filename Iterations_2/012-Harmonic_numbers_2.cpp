#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m; //Input variable

    while ( cin >> n >> m ){
        double difference = 0.0;

        for (int i = m + 1; i <= n; i++) {
            difference += 1.0 / i;
        }

        cout << difference << endl;
    }

}