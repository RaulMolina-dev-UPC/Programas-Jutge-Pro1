#include <iostream>
using namespace std;
//Pre: a caracter c
//Post: Return true if tha caracter its a letter
bool its_letter(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
//Pre: A caracter c
//Post: Return true if the caracter is a Upper case
bool its_UpperCase(char c){
    return its_letter(c) && c >= 'A' && c <= 'Z';
}
//Pre: A caracter c
//Post: Return true if the caracter is a LowerCase
bool its_LowerCase(char c){
    return its_letter(c) && c >= 'a' && c <= 'z';
}
//Pre: A caracter c
//Post: Return true if the caracter is a Vowel
bool its_Vowel(char c){
    return its_letter(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
//Pre: A caracter c
//Post: Return true if the caracter is a Consonant
bool its_Consonant(char c){
    return its_letter(c) && !its_Vowel(c);
}
//Pre: A caracter c
//Post: Return true if the caracter is a digit
bool its_Digit(char c){
    return c >= '0' && c <= '9';
}
//Pre: C its a caracter, S string, b bool
//Post: Prints a text depended on the mainly by the bool, and also print the string and char.
void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}
int main() {

 char caracter;
 cin >> caracter;
 print_line(caracter, "letter", its_letter(caracter));
 print_line(caracter, "vowel", its_Vowel(caracter));
 print_line(caracter, "consonant", its_Consonant(caracter));
 print_line(caracter, "uppercase", its_UpperCase(caracter));
 print_line(caracter, "lowercase", its_LowerCase(caracter));
 print_line(caracter, "digit", its_Digit(caracter));
}