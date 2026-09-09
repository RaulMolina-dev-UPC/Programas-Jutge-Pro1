#include <iostream>

using namespace std;

int main(){
    char variable; //Startup variable

    cin >> variable;

    if (variable >= 'a' && variable <= 'z') cout << "Lowercase letter" << endl;
    else if (variable >= 'A' && variable <= 'Z') cout << "Uppercase letter" << endl;
    else if (variable >= '0' && variable <= '9') cout << "Number" << endl;
}