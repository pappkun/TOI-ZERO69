#include<iostream>
using namespace std;

int main(){

    string str;
    cin >> str;

    for(int i=4;i>=0;i--){
        if(str[i] < 'a') str[i] = str[i] + 32;
        cout << str[i];
    }

}