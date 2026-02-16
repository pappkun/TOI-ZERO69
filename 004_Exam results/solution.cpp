#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    bool pass = true;
    if(a < 5) pass = false;
    if(b < 20) pass = false;
    if(c < 25) pass = false;

    if(pass) cout << "pass";
    else cout << "fail";

}