#include<iostream>
using namespace std;

int main(){//Sagit's 計分程式
    int N;//N答對題數
    int ans=0;//ans答案

    cin>>N;

    if(N>40){
        cout<<100<<endl;

        return 0;
    }
    if(N<10)
        ans+=6*N;
    else
        ans+=60;
    N-=10;

    if(N>0){
        if(N<10)
            ans+=2*N;
        else
            ans+=20;
        N-=10;
    }
    if(N>0)
        ans+=N;
    cout<<ans<<endl;//輸出成績

    return 0;
}
/*
Input:
10
40
Output:
60
100
*/