#include <iostream>
using namespace std;
int main(){
    int y, d, h, m, s; //variables that respecte the time y=year
    cin >> y >> d >> h >> m >> s;
    cout << y * 3600 * 24 * 365 + d * 24 * 3600 + h * 3600 + m * 60 + s << endl;
}