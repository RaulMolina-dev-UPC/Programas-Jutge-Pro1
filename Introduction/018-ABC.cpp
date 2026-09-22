#include <iostream>

int main(){
    int x, y, z, higher, mid, low; // Startup variables
    std::string letters;
    std::cin >> x >> y >> z;
    std::cin >> letters;

      if (x > y && y > z) { // Here we see which number is higher, middle, or lower, and save it in a variable to print the number as the client wants.
          higher = x; 
        mid = y; 
        low = z;
     } else if (x < y && y < z) {
          higher = z; 
        mid = y; 
        low = x;
     } else if (x > y && y < z && z < x) {
    higher = x;
       mid = z;
       low = y; 
     } else if (x < y && y > z && x < z) {
         higher = y;
         mid = z;
         low = x;
     } else if (x < y && y > z && x > z) {
         higher = y;
         mid = x;
         low = z;
     } else if (x > y && y < z && x < z) {
         higher = z;
         mid = x;
         low = y;
    }
    

    if( letters == "ABC" ){
        std::cout << low << " " << mid << " " << higher << std::endl;
    }
    else if ( letters == "CBA"  ){
        std::cout << higher << " " << mid << " " << low << std::endl;
    } 
    else if ( letters == "CAB"  ){
        std::cout << higher << " " << low << " " << mid << std::endl;
    } 
    else if ( letters == "BCA"  ){
        std::cout << mid << " " << higher << " " << low << std::endl;
    } 
    else if ( letters == "ACB"  ){
        std::cout << low << " " << higher << " " << mid << std::endl;
    } 
    else{
        std::cout << mid << " " << low << " " << higher << std::endl; // The rest will be (letters == "BAC")

    } 
}