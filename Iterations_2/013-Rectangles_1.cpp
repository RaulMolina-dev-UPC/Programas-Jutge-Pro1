#include <iostream>
using namespace std;

int main() {

    int rows, columns; //Input varaibles
    int number = 0;
    bool Firts_Rectangle = true;

    while ( cin >> rows >> columns ){
        int number = (rows + columns)%5;

        if (Firts_Rectangle) { //This it's only for format
            Firts_Rectangle = false;
        } else {
            cout << endl;
        }

        for ( int i = 1; i <= rows; i++ ){ //We create the Rectangle
            for ( int k = 1; k <= columns; k++){
                cout << number;
            }
            cout << endl;
        }

    }
}