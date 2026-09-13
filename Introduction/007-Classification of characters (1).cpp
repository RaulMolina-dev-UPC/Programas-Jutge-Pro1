#include <iostream>
using namespace std;

int main(){
    char variable;
    char new_letter; //StartUp variables

    cin >> variable;

    if (variable >= 'a' && variable <= 'z') {

        cout << "lowercase" << endl; //Betwen a-z are all lowercase

        if ( variable == 'a' || variable == 'e' || variable == 'i' || variable == 'o' || variable == 'u'){ //We isolate the vowels

            cout << "vowel" << endl;

        } else { // The rest of the letters

            cout << "consonant" << endl;
        }
    } 

    if (variable >= 'A' && variable <= 'Z'){

        cout << "uppercase" << endl;

        if ( variable == 'A' || variable == 'E' || variable == 'I' || variable == 'O' || variable == 'U'){ //We isolate the vowels

            cout << "vowel" << endl;

        } else { // The rest of the letters

            cout << "consonant" << endl;
        }
    }

}