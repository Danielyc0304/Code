#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double a, b, c;//a, b, c三角形三邊長
    double s;//s計算值

    cin>>a>>b>>c;

    s=(a+b+c)/2;

    cout<<fixed<<setprecision(2)<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;//輸出三角形面積

    return 0;
}
/*
Input:
3
4
5
Output:
6.00
*//*
Input:
9
8
7
Output:
26.83
*/