#include<iostream>
using namespace std;

int main(){

    int t;
    char cha;
    cin >> t >> cha;
    if(cha > 'Z') cha = cha - 32;

    if((t <= 0 && cha == 'C') || (t <= 32 && cha == 'F')) cout << "solid";
    else if((t >= 100 && cha == 'C') || (t >= 212 && cha == 'F')) cout << "gas";
    else cout << "liquid";

}