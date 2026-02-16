#include<iostream>
using namespace std;

int main(){

    int midterm , final;
    cin >> midterm >> final;

    int sum = midterm + final;
    cout << sum << endl;
    if(sum >= 50) cout << "pass";
    else cout << "fail";

}