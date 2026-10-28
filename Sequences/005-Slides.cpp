#include <iostream>
using namespace std;


int main() {
    int num_1, num_2, num_3;
    int index_asc = 2;
    int index_des = 2;
    int all_i_asc = 0; // Inicialización ficiticia pero adecuada
    int all_i_des = 0; // Inicialización ficiticia pero adecuada
    bool adcendet = false;
    bool descendent = false;
    int asc_diff = 0; // Inicialización ficiticia pero adecuada
    int des_diff = 0; // Inicialización ficiticia pero adecuada
    cin >> num_1 >> num_2;
    while( cin >> num_3 ){
        if( num_1 - num_2 == num_2 - num_3 && num_1 - num_2 != 0){
            int difference = num_1 -num_2;
            if( difference < 0){
                index_asc++;
                if ( asc_diff > difference ){
                    asc_diff = difference;
                }
                if ( index_asc > all_i_asc ){
                    all_i_asc = index_asc;
                }
            } else {
                index_des++;
                if ( des_diff < difference ){
                    des_diff = difference;
                }
                if ( index_des > all_i_des ){
                    all_i_des = index_des;
                }
            }

        } else {
            index_asc = 2;
            index_des = 2;
        }
        num_1 = num_2;
        num_2 = num_3;
    }

    if( asc_diff != 0){
        cout << "/ " << 
    }
    if( des_diff != 0) {

    }



}