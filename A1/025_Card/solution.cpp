#include<iostream>
using namespace std;

int main(){

    char A[4] = {'A' , 'J' , 'Q' , 'K'};
    string a[4] = {"ace" , "jack" , "queen" , "king"};
    char B[4] = {'D' , 'H' , 'S' , 'C'};
    string b[4] = {"diamonds" , "hearts" , "spades" , "clubs"};

    string str;
    cin >> str;

    for(int i=0;i<str.length();i++){
        if(str[i] > 'Z') str[i] = str[i] - 32;
    }

    if(str.length() == 2){
        if(str[0] >= '2' && str[0] <= '9') cout << str[0];
        else{
            for(int i=0;i<4;i++){
                if(str[0] == A[i]){
                    cout << a[i];
                    break;
                }
            }
        }
    }
    else cout << "10";

    cout << " of ";
    for(int i=0;i<4;i++){
        if(str[str.length()-1] == B[i]){
            cout << b[i];
            break;
        }
    }

}