#include<iostream>
#include<vector>
using namespace std;

int main(){

    string str;
    cin >> str;

    vector<pair<int,char>> vec;
    char cha = str[0];
    int c = 1;
    for(int i=1;i<5;i++){
        if(cha == str[i]) c++;
        else{
            vec.push_back({c,cha});
            c = 1;
        }

        cha = str[i];
        
    }
    vec.push_back({c,cha});


    for(int i=0;i < vec.size();i++){
        cout << vec[i].first << vec[i].second;
    }

}