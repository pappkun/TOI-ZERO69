#include<iostream>
using namespace std;

int main(){

    int even = 0 , odd = 0;
    for(int i=0;i<3;i++){
        int a;
        cin >> a;
        if(a%2 == 0) even++;
        else odd++;
    }
    
    cout << "even " << even << endl;
    cout << "odd " << odd;

}