#include<iostream>
using namespace std;

int main(){

    char cha;
    string n;
    cin >> cha >> n;

    bool a = false , b = false;
    if(cha == 'H') a = true;
    if(n == "4567") b = true;

    if(a && b) cout << "safe unlocked";
    else if(a) cout << "safe locked - change digit";
    else if(b) cout << "safe locked - change char";
    else cout << "safe locked";

}