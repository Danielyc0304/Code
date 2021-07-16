#include<iostream>
using namespace std;

int main(){//牛仔(ㄗˇ)很忙
    int X, Y;//X, Y時間

    cin>>X>>Y;

    X+=2;
    Y+=30;//加兩個半小時
    if(Y>=60){//分大於60，進位
        ++X;
        Y-=60;
    }
    if(X>=24)//換日
        X-=24;
    if(X/10==0)//個位數前面要加0
        cout<<0<<X;
    else
        cout<<X;
    cout<<':';
    if(Y/10==0)//個位數前面要加0
        cout<<0<<Y<<endl;
    else
        cout<<Y<<endl;//輸出結果
    return 0;
}
/*
Input:
9 30
Output:
12:00
*/