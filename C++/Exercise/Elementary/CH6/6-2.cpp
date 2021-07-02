#include<iostream>
using namespace std;

long long int f(int n){//費氏數列總和; n數字
    if(n==1 || n==2)//如果是第一項或第二項
        return 1;
    return f(n-1)+f(n-2);
}
int main(){//不適合使用Divide and Conquer的問題—費氏數列
    int n;//n數字

    while(cin>>n)
        cout<<f(n)<<endl;//輸出費氏數列第n項
    return 0;
}
/*
Input:
45
Output:
1134903170
*/