#include<iostream>
using namespace std;

int f(int n){//數列; n項數
    if(n==1)
        return 1;
    return f(n-1)+n-1;//f(n)=f(n-1)+n-1
}
int main(){//求數列第n項
    int n;//n項數

    while(cin>>n)
        cout<<f(n)<<endl;
    return 0;
}
/*
Input:
1
4
Output:
1
7
*/