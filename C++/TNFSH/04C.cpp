#include<iostream>
using namespace std;

int main(){//Number modifier
    int a;//a數字

    cin>>a;

    if(a%2==1)//如果是奇數
        a=3*a+1;
    else//如果是偶數
        a/=2;
    cout<<a<<endl;//判斷、輸出數字

    return 0;
}
/*
Input:
7
Output:
22
*//*
Input:
66
Output:
33
*/