#include<iostream>
using namespace std;

int main(){

    int y1,m1,d1,y2,m2,d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    if(y1 == y2 && m1 == m2 && d1 == d2){
        cout << 0;
        return 0;
    }

    bool f = false;
    if(y1 < y2) f = true;
    else if(y1 == y2){
        if(m1 < m2) f = true;
        else if(m1 == m2){
            if(d1 < d2) f = true;
        }
    }

    if(f) cout << 1;
    else cout << 2;

}