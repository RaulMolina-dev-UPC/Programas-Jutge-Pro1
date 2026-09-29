#include <iostream>

using namespace std;

int main(){
    int counter = 0;
    string text;
    getline(cin, text); //Use getline because spaces are included in this exercise.

    for( int i=0; text[i] != '\0'; i++){

            if( text[i] == 'h' && text[i+1] == 'e' && text[i+2] == 'l' && text[i+3] == 'l' && text[i+4] == 'o'){
            counter+=1;
            }

        
    }

    cout << counter << endl;
}