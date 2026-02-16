#include<iostream>
using namespace std;

int main(){

    string n;
    char cha;
    cin >> n >> cha;

    int a,b;
    a = stoi(n);
    char temp = n[0];
    n[0] = n[1];
    n[1] = temp;
    b = stoi(n);

    int ans;
    if(cha == '+') ans = a + b;
    else ans = a * b;

    cout << a << " " << cha << " " << b << " = " << ans;

}