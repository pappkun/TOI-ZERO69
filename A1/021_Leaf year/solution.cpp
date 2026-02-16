#include<iostream>
using namespace std;

int main(){

    int y;
    cin >> y;

    bool leap = false;

    if(y%4 == 0) leap = true;
    if(y%100 == 0) leap = false;
    if(y%400 == 0) leap = true;
    if(y == 1500) leap = true;

    if(leap) cout << "yes";
    else cout << "no";
    
}