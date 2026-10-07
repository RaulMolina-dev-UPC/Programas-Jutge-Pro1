#include <iostream>
using namespace std;

int main(){
    int n; //Coutn variable
    int count_a = 0;
    int count_b = 0;
    int count_c = 0;
    char letter;

    cin >> n;

    for (int i = 1; i<=n ; i++){
        cin >> letter;
        if (letter == 'a') count_a++;
        else if (letter == 'b') count_b++;
        else if (letter == 'c') count_c++;
    }

    if ( count_a >= count_b && count_a >= count_c ) cout << "majoria de a" << '\n' << count_a << " repeticio(ns)" << endl;
    else if (count_a <= count_b && count_b >= count_c) cout << "majoria de b" << '\n' << count_b << " repeticio(ns)" << endl;
    else if (count_a <= count_c && count_c >= count_b) cout << "majoria de c" << '\n' << count_c << " repeticio(ns)" << endl;

}