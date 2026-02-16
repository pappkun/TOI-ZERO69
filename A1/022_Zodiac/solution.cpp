#include<iostream>
using namespace std;

int main(){

    string str[12] = {"capricorn" , "aquarius" , "pisces" , "aries" , "taurus" ,
    "gemini" , "cancer" , "leo" , "virgo" , "libra" , "scorpio" , "sagittarius"};

    int d,m;
    cin >> d >> m;

    int x;

    if( (d >= 22 && m == 12) || (d <= 19 && m == 1)) x = 0;
    if( (d >= 20 && m == 1) || (d <= 18 && m == 2)) x = 1;
    if( (d >= 19 && m == 2) || (d <= 20 && m == 3)) x = 2;
    if( (d >= 21 && m == 3) || (d <= 19 && m == 4)) x = 3;
    if( (d >= 20 && m == 4) || (d <= 20 && m == 5)) x = 4;
    if( (d >= 21 && m == 5) || (d <= 21 && m == 6)) x = 5;
    if( (d >= 22 && m == 6) || (d <= 22 && m == 7)) x = 6;
    if( (d >= 23 && m == 7) || (d <= 22 && m == 8)) x = 7;
    if( (d >= 23 && m == 8) || (d <= 22 && m == 9)) x = 8;
    if( (d >= 23 && m == 9) || (d <= 23 && m == 10)) x = 9;
    if( (d >= 24 && m == 10) || (d <= 21 && m == 11)) x = 10;
    if( (d >= 22 && m == 11) || (d <= 21 && m == 12)) x = 11;

    cout << str[x];

}