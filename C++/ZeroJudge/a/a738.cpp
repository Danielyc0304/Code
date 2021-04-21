#include<iostream>
using namespace std;

int GCD(int a, int b){//最大公因數; a, b數字
    if(b==0)
        return a;
    return GCD(b, a%b);//回傳最大公因數
}
int main(){//最大公约数
    int a, b;//a, b數字

    while(cin>>a>>b)
        cout<<GCD(a, b)<<endl;//輸出最大公因數
    return 0;
}
/*
Input:
30 24
2 4
Output:
6
2
*/