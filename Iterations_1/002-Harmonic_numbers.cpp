#include <iostream>

int main(){
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);
    int n;//Startup Variables
    double H = 0.0;
    std::cin >> n;

    for( int i=1; i <= n; i++){
        H += 1.0 / i;

    }

    std::cout << H << std::endl;


}