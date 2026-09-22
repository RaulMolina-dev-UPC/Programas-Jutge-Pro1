#include <iostream>
using namespace std;
#include <string> // this will be useful for handling the two numbers below 10

int main(){
    int h, m, s;
    string sec, min , hou;
    cin >> h >> m >> s;
    s += 1; // add 1 second
    sec = to_string(s);
    min = to_string(m);
    hou = to_string(h);


    if ( s > 59 ){ // s == 60 or more (impossible case)
        s = 0;
        m += 1;
        sec = to_string(s);
        min = to_string(m);
    } 

    if( s < 10){
    sec = "0" + sec;
    }
    

    if ( m > 59 ){
    m = 0;
    h +=1; // or h++
    min = to_string(m);
    hou = to_string(h);
    }

    if( m < 10 ){
        min = "0" + min;
    }
  


    if ( h > 23 ){
        h=0;
        hou = to_string(h);
    }

    if( h < 10 ){
    hou = "0" + hou;
    }

    cout << hou << ":" << min << ":" << sec << endl;
    
}