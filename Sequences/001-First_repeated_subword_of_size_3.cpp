#include <iostream>
using namespace std;

int main() {
    bool aaa = false;
    bool aab = false;
    bool aba = false;
    bool abb = false;
    bool baa = false;
    bool bab = false;
    bool bba = false;
    bool bbb = false;
    bool combination = false;
    char lett_1 = 'f'; // " fake " but suitable initialization
    char lett_2 = 'f'; //" fake " but suitable initialization
    char lett_3;
    cin >> lett_3;
    int index = -2; //" fake " but suitable initialization
    while ( !combination ){
        if (lett_1 == 'a' && lett_2 == 'a' && lett_3 == 'a') {
            combination = aaa;
            aaa = true;
        } else if (lett_1 == 'a' && lett_2 == 'a' && lett_3 == 'b') {
            combination = aab;
            aab = true;
        } else if (lett_1 == 'a' && lett_2 == 'b' && lett_3 == 'a') {
            combination = aba;
            aba = true;
        } else if (lett_1 == 'a' && lett_2 == 'b' && lett_3 == 'b') {
            combination = abb;
            abb = true;
        } else if (lett_1 == 'b' && lett_2 == 'a' && lett_3 == 'a') {
            combination = baa;
            baa = true;
        } else if (lett_1 == 'b' && lett_2 == 'a' && lett_3 == 'b') {
            combination = bab;
            bab = true;
        } else if (lett_1 == 'b' && lett_2 == 'b' && lett_3 == 'a') {
            combination = bba;
            bba = true;
        } else if (lett_1 == 'b' && lett_2 == 'b' && lett_3 == 'b') {
            combination = bbb;
            bbb = true;
        }
        
        if (combination) {
            cout << lett_1 << lett_2 << lett_3 << " " << index << endl;
        } else {
            lett_1 = lett_2;
            lett_2 = lett_3;
            index++;
            cin >> lett_3;
        }
    }

}