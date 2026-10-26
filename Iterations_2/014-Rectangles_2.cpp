#include <iostream>
using namespace std;

int main() {

    int rows, columns; //Input varaibles
    bool Firts_Rectangle = true;

    while ( cin >> rows >> columns ){
        int index = 9;

        if (Firts_Rectangle) { //This it's only for format
            Firts_Rectangle = false;
        } else {
            cout << endl;
        }

        for (int i = 1; i <= rows; i++ ){ //We create the Rectangle
            for (int k = 1; k <= columns; k++){

                if (index == -1) index = 9;
                cout << index;
                index--;


            }
            cout << endl;
        }

    }
}