#include <iostream>

int main(){
    char letter_1, letter_2; // Variables iniciales.

    std::cin >> letter_1 >> letter_2;

    if ( letter_1 == letter_2) std::cout << "-" << std::endl; // If de una sola línea para ahorrar espacio.
    else if ( (letter_1 == 'A' && letter_2 == 'P') || (letter_1 == 'P' && letter_2 == 'V') || (letter_1 == 'V' && letter_2 == 'A') ) std::cout << "1" << std::endl;
    else std::cout << "2" << std::endl; // El resto será 2 porque el ejercicio limita la entrada a A, P y V.


}