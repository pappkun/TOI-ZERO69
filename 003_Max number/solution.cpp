#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin >> a >> b >> c;

    int mx = a;
    if(mx < b) mx = b;
    if(mx < c) mx = c;

    cout << mx;

}