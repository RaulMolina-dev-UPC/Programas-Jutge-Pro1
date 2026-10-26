#include <iostream>
using namespace std;
//Pre: a,b > 0
//Post: Greater common divisor of a and b
int gcd2(int a, int b){
    while( b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
//Pre: a,b,c,d > 0
//Post: Greater common divisor of a, b ,c and d
int gcd4(int a, int b, int c, int d){
    return gcd2(d, gcd2(c, gcd2(a,b)));
}
int main() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    cout << gcd4(x,y,z,k) << endl;

}