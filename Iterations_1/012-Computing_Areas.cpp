#include <iostream>

using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(6);
    const double PI =  3.14159265358979323846; //Declare const PI
    double n,r,x,y; //Input varaibe
    double area;
    string form;

    cin >> n;


    for( int i = 1; i <= n; i++){
        cin >> form;
        if( form == "rectangle" ){
            
            cin >> x >> y;
            area = x*y;
            cout << area << endl;
        } else if ( "circle"){
            cin >> r;
            area = PI * r * r;
            cout << area << endl; 
        }
    }
}