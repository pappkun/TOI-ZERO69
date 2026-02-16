#include<iostream>
using namespace std;

int main(){

    int m,d;
    cin >> m >> d;

    if(m%3 == 0){
        m = m + 1;
        if(m > 12) m = 1;
    }

    if(m <= 3) cout << "winter";
    else if(m <= 6) cout << "spring";
    else if(m <= 9) cout << "summer";
    else cout << "fall";

}