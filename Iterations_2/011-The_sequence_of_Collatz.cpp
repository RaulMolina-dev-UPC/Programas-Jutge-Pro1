#include <iostream>
using namespace std;

int main() {
    int n, operations; // n is an input varaible

    while ( cin >> n ){
        operations = n;
        int index = 0;

        while ( operations != 1 ){

            operations = (operations % 2 == 0) ? (operations / 2) : (operations * 3 + 1); //Optimizarion of if else
            index++;
        }

        cout << index << endl;
    }
}