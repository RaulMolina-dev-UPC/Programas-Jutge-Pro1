#include <iostream>

int main(){
    int valor;
    int s = 0;
    int m = 0;
    int h = 0;

    std::cin >> valor;


        while( valor >= 3600){
                h++;
                valor -= 3600;
            
        }

        while( valor >= 60){
                m++;
                valor -= 60;
        }

        s = valor;

        std::cout << h << " " << m << " " << s << std::endl;
        

}