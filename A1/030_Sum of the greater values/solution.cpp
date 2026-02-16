#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n == 1){
        int a,b;
        cin >> a >> b;
        if(a > b) cout << a;
        else cout << b;
        return 0;
    }

    int ans = 0;
    bool f = false;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        int mx = max(a,b);
        if(f) cout << " + ";
        cout << mx;
        f = true;

        ans = ans + mx;
    }

    cout << " = " << ans;

}