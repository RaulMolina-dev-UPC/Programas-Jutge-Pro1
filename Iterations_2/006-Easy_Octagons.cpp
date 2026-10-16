#include <iostream>
using namespace std;

int main() {
    int n;//Input variable
    while (cin >> n){
        int x_total = n;

        for(int i = 1; i < n; i++){ //Upper Octagon Part
            for(int k = n; k > i; k--){ // " "
                cout << " ";

            }

            for(int l = 1; l <= x_total; l++){ // "X"
                cout << "X";
            }
            x_total+=2;
            cout << endl;
        
        }


        for(int i = 1; i <= n; i++){ //Middle Octagon Part
            for(int k = 1; k <= x_total; k++){
                cout << "X";
    
            }
            cout << endl;
        }


        for(int i = 1; i < n; i++){ //Lower Octagon Part

             x_total-=2;
             for( int k = 1; k <= i; k++){ // " "
                cout << " ";
             }

             for( int l = 1; l <= x_total; l++){
                cout << "X";
             }
             cout << endl;

        }

        cout << endl;

    }
}