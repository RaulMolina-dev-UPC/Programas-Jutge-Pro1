#include <iostream>
using namespace std;

int main() {

    int f, c; // Input variables: f = "rows", c = "columns"

    cin >> f >> c;
    for(int i = 0; i < f; i++){
        int index = i;
        int limit = 0;
        while( index > 0 && limit != c ){ // This creates the number coming from the right
            cout << index%10;
            index--;
            limit++;
        }

        for(int k = 0; k < c-i; k++){ // This creates the remaining numbers that go to the left
            cout << k%10;
        }

        cout << endl;
    }
}