#include<iostream>
using namespace std;

int main(){

    int y,cc;
    cin >> y >> cc;

    int ans;

    if(y <= 1990){
        if(cc <= 1500) ans = 1250;
        else if(cc <= 2000) ans = 1400;
        else ans = 2000;
    }
    else if(y < 2000){
        if(cc <= 1500) ans = 1100;
        else if(cc <= 2000) ans = 1300;
        else ans = 1700;
    }
    else{
        if(cc <= 1500) ans = 1000;
        else if(cc <= 2000) ans = 1200;
        else ans = 1500;
    }

    cout << ans;

}