#include <iostream>
using namespace std;

int main(){
    int x, y;

    cin >> x >> y;

    int d = x / y;
    int r = x % y;

    cout << d << " " << r << endl;
}
