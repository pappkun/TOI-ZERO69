#include<iostream>
using namespace std;

int main(){

    int age;
    char cha;
    cin >> age >> cha;

    if(age <= 18 || cha == 's' || cha == 'S') cout << 20;
    else cout << 50;

}