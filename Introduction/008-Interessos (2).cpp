#include <iostream>

using namespace std;

void TAE(double balance) { // I started this function because I do not want to repeat myself and I do not want to put the TAE calculations outside the if statement.
    double benefit = balance - 1000;
    double TAE = (100 * benefit / 1000);
    cout << TAE << endl;
}

// In fact, we can place the for loop inside the function and it would work, but we would need to add more values; however, it would help avoid repetition.

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    double interest;
    double balance = 1000; // This will be the total balance.
    string time; // Start-up variables.
    cin >> interest >> time;
    double realInterest = interest / 100.0; // This is the interest expressed as a decimal value; it is better to calculate it this way.

    if (time == "setmanal") {

        for (int i = 1; i <= 52; i++) {

            double weaklyInterest = realInterest / 52;
            balance += balance * weaklyInterest;
        }

        TAE(balance);

    }

    if ( time == "mensual"){

        for(int i = 1; i <= 12; i++ ){
            double monthlyInterest = realInterest / 12;
            balance += balance * monthlyInterest;
        }

        TAE(balance);
    }

        if ( time == "trimestral"){

        for(int i = 1; i <= 4; i++ ){
            double trimInterest = realInterest / 4;
            balance += balance * trimInterest;
        }

        TAE(balance);
    }

        if ( time == "semestral"){

        for(int i = 1; i <= 2; i++ ){
            double semInterest = realInterest / 2;
            balance += balance * semInterest;
        }

        TAE(balance);
    }

}
