#include<iostream>
#include<cmath>
using namespace std;

int num[1000];//num質數
int j=1;//j旗標

void prime(int max){//建立質數表; max最大值
    int s, c=0;//s計算值; c判斷
    int i;//i旗標

    num[0]=2;//第一個質數為2

    for(s=3; s<=sqrt(max); s+=2){//執行到最大值開根號，並以奇數執行
        for(i=0; i<j; ++i)
            if(s%num[i]==0){
                c=1;

                break;
            }
        if(c==0){
            num[j]=s;
            ++j;
        }
        c=0;
    }
}
int main(){
    int a;//a數字
    int c=0;//c計數
    int i;//i旗標
    
    cin>>a;

    prime(a);//質數表

    for(i=0; i<j && a!=1; ++i){
        for(c=0; a%num[i]==0; ++c)
            a/=num[i];
        if(c!=0)
            cout<<num[i];
        if(c>1)
            cout<<'^'<<c;
        if(a!=1 && c!=0)
            cout<<" * ";
    }
    if(a!=1)
        cout<<a;
    cout<<endl;//輸出結果

    return 0;
}
/*
Input:
20
Output:
2^2 * 5
*//*
Input:
17
Output:
17
*//*
Input:
999997
Output:
757 * 1321
*/