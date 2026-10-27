#include <iostream>
using namespace std;

//Pre: d1, d2 > 0, n1,n2 cualsevol integer;
//Post: retorna cert si la divisio de n1 i d1 es estrictament més petita qua la divisió entre n2/d2, fals en cas contari
bool c_frac(int n1, int d1, int n2, int d2){
    double frac1 = double(n1)/d1;
    double frac2 = double(n2)/d2;
    return frac1 < frac2;
}
int main() {
    int x, y, z, k; //Input variables
    cin >> x >> y >> z >> k;
    cout << c_frac(x, y, z, k) << endl;

}