#include<iostream>
using namespace std;

int main(){
    int a, b, c;//a, b, c成績
    double s;//s計算值

    cin>>a>>b>>c;

    s=(a+b+c)/3;

    if(s>100 || s<0)
        cout<<"BS\n";
    else if(s>=60)
        cout<<"PASS\n";
    else
        cout<<"FAIL\n";//判斷、輸出結果
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