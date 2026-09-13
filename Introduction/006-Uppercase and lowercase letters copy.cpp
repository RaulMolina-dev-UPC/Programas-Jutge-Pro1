#include <iostream>
using namespace std;

int main(){
    char variable;
    char new_letter; //StartUp variables

    cin >> variable;

    if (variable >= 'a' && variable <= 'z') {
        new_letter = int(variable) - 32; //The difference between the lowercase and uppercase it's 32 so we can do the difference and obtain the uppercase of it with ASCII code
        cout << new_letter << endl; //You can also do 'a' - 'A' and it will give you 32

    } 

    if (variable >= 'A' && variable <= 'Z'){
        new_letter = int(variable) + 32;
        cout << new_letter << endl;
    }
}