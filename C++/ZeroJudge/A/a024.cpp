#include<iostream>
using namespace std;

int GCD(int a, int b){//最大公因數; a, b數字
    if(b==0)
        return a;
    return GCD(b, a%b);//輾轉相除法，回傳最大公因數
}
int main(){//最大公因數(GCD)
    int a, b;//a, b數字

    cin>>a>>b;
    cout<<GCD(a, b)<<endl;//輸出結果

    return 0;
}
/*
Input:
12 15
Output:
3
*//*
Input:
1 100
Output:
1
*/