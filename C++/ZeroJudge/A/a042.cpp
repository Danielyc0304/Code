#include<iostream>
using namespace std;

int main(){//平面圓形切割
    int n;//n圓形數

    while(cin>>n)
        cout<<n*(n-1)+2<<endl;//輸出圓形切割出的空間數
    return 0;
}
/*
Input:
3
4
Output:
8
14
*/