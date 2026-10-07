#include <iostream>
using namespace std;

int main (){
    int init_number; //input variable
    int compare_number;
    int index = 0; //index fot counting the times it ends equal like init_number

    cin >> init_number;

    cout << "nombres que acaben igual que " << init_number << ":" << endl;

    //Now we obtain the last 3 digits of init_number;

    int i_1 = init_number%10;
    int i_2 = (init_number/10)%10;
    int i_3 = (init_number/100)%10;

    while( cin >> compare_number){

        if (compare_number % 10 == i_1 && (compare_number / 10) % 10 == i_2 && (compare_number / 100) % 10 == i_3){
            index++;
            cout << compare_number << endl;
        }
    }

    cout << "total: " << index << endl;
}