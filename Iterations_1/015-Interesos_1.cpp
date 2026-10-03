#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    double c, i, t;
    string tipe;

    cin >> c >> i >> t >> tipe;
    double percent = i/100;
    double final_c = c;

    for( int index = 1; index <= t; index++){
        if( tipe == "compost"){
            final_c+= final_c * percent;
        } else if ( tipe == "simple" ){
            final_c+= c * percent;
        }
    }

    cout << final_c << endl;

}
