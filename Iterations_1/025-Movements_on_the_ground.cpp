#include <iostream>
using namespace std;

int main(){

    char letter; //input varaible
    int x = 0;
    int y = 0; //Index count varaibles

    while (cin >> letter){
        if (letter == 'n') y--;
        else if (letter == 's') y++;
        else if (letter == 'w') x--;
        else if (letter == 'e') x++;
    }

    cout << "(" << x << ", " << y << ")" << endl;
}