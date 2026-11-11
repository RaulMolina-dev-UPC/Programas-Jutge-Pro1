#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    if (not (cin >> x)) {
        cout << "no" << endl;
        return 0;
    }

    long long actual = x;
    int cnt = 1;
    int w = 0;
    long long D = 0;
    int escalones = 1;

    while (cin >> x) {
        if (x == actual) {
            ++cnt;
            if (w != 0 and cnt > w) {
                cout << "no" << endl;
                return 0;
            }
        } else {
            if (w == 0) w = cnt;
            else if (cnt != w) {
                cout << "no" << endl;
                return 0;
            }

            long long d = x - actual;
            if (escalones == 1) D = d;
            else if (d != D) {
                cout << "no" << endl;
                return 0;
            }

            ++escalones;
            actual = x;
            cnt = 1;
        }
    }

    if (escalones < 2 or cnt != w) cout << "no" << endl;
    else cout << "si" << endl;
}