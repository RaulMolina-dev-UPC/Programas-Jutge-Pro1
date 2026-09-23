#include <iostream>
#include <string>
using namespace std;

int main(){
    int counter = 0;
    char letter_a =  'a';
    string text;
    getline(cin, text); //Use getline because spaces are included in this exercise.

    for( int i=0; i < text.length(); i++){
        if( text[i] == letter_a){
            counter+=1;
            
        }
        
    }

    cout << counter << endl;
}