#include<iostream>
using namespace std;

int main(){
    
    int money;
    cin >> money;

    cout << "10 = " << money/10 << endl;
    money = money % 10;
    cout << "5 = " << money/5 << endl;
    money = money % 5;
    cout << "2 = " << money/2  << endl;
    money = money % 2;
    cout << "1 = " << money;

}