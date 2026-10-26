#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: h, m, and s are the hours, minutes, and seconds equivalent to n seconds
void decompose(int n, int& h, int& m, int& s) {
    h = n / 3600;
    m = (n % 3600) / 60;
    s = n % 60;
}

int main() {
    int n, hours, minutes, seconds;
    cin >> n;

    decompose(n, hours, minutes, seconds);
    cout << "| " << hours << "h, " << minutes << "m, " << seconds << "s |" << endl;

    return 0;
}