#include<iostream>
using namespace std;

long long f(int n){//階乘; n數字
    if(n==1)
        return 1;
    return n*f(n-1);
}
int main(){//求n階乘
    int n;

    while(cin>>n)
        cout<<f(n)<<endl;//輸出結果
    return 0;
}
/*
Input:
10
Output:
3628800
*/