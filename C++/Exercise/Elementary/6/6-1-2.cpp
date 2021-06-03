#include<iostream>
using namespace std;

int f(int a, int b){//次方; a底數; b指數
    int tmp;//tmp暫存值

    if(b==0)
        return 1;
    if(b==1)
        return a%1234;
    if(b%2==0){//如果指數為偶數
        tmp=f(a, b/2)%1234;

        return tmp*tmp%1234;
    }
    return (a*f(a, b-1))%1234;
}
int main(){//a的b次方
    int a, b;//a, b數字

    while(cin>>a>>b){
        a%=1234;

        cout<<f(a, b)%1234<<endl;//輸出a的b次方除以1234的餘數
    }
    return 0;
}
/*
Input:
12321 9999
Output:
853
*/