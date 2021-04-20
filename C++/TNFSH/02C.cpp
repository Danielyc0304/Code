#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){//自由落體計算機[基本變數輸入輸出]
    int h;//h高度

    cin>>h;
    cout<<fixed<<setprecision(1)<<sqrt(2*h/9.8)<<endl;//輸出自由落體所需時間

    return 0;
}
/*
Input:
20
Output:
2.0
*/