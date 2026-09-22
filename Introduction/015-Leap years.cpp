#include <iostream>

int main(){

    int year;
    std::cin >> year;

    if( (year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && (year/100) % 4 == 0)){ // This means that if the number does not end in 00 and is a multiple of 4, it is a leap year
                                                                                         // Or, if the first two digits (e.g., 2000 -> 20) are a multiple of 4, it is a leap year; otherwise, it is not
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
        
    }
}