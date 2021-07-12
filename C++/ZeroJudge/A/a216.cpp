#include<iostream>
using namespace std;

int f(int n){//遞迴; n天數
    if(n==0)
        return 0;
    return n+f(n-1);
}
long int g(int n){//遞迴; n天數
    if(n==0)
        return 0;
    return f(n)+g(n-1);
}
int main(){//數數愛明明
    int n;//n天數

    while(cin>>n)
        cout<<f(n)<<' '<<g(n)<<endl;//輸出結果
    return 0;
}
/*
Input:
1
2
3
5
8
13
Output:
1 1
3 4
6 10
15 35
36 120
91 455
*/