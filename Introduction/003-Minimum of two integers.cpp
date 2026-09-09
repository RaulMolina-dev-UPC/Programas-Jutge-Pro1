#include <iostream>

using namespace std;

int main(){
    int x;
    int y; //We start up variables

    cin >> x >> y; //read input 

    bool minimum = x > y; //This you can write it in the if statement

    if (minimum) { //when true (x > y)
        cout << y << endl; //this is becouse when its true y is lower than x
    } else {
        cout << x << endl;
    }

}