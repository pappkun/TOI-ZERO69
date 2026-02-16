#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n < 0){
        cout << "Error : Please input positive number";
        return 0;
    }
    if(n == 0 || n > 9){
        cout << "Error : Out of range";
        return 0;
    }

    string r[9] = {"I" , "II" , "III" , "IV" , "V" , "VI" , "VII" , "VIII" , "IX"};
    cout << r[n-1];


}