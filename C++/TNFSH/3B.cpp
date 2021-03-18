#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    double s;

    cin>>a>>b>>c;

    s=(a+b+c)/3;

    if(s>100 || s<0)
        cout<<"BS\n";
    else if(s>=60)
        cout<<"PASS\n";
    else
        cout<<"FAIL\n";//判斷成績
    return 0;
}
/*
Input:
150
280
96
Output:
BS
*/