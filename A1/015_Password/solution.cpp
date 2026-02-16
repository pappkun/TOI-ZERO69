#include<iostream>
using namespace std;

int main(){

    string n,sn,age;
    cin >> n >> sn >> age;

    if(n.length() >= 5 && sn.length() >= 5){
        cout <<  n[0] << n[1] << sn[sn.length()-1] << age[age.length()-1];
    }
    else{
        cout << n[0] << age << sn[sn.length()-1];
    }


}