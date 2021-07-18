#include<iostream>
using namespace std;

int main(){//獨角蟲進化計算器
    int c, w;//c糖果數; w獨角蟲數
    int c1;//c1計數
    int ans=0;//ans答案

    cin>>c>>w;

    while(c/12>0 && w!=0){
        c-=12;
        --w;
        ++c;
        ++c1;//計算進化數
        ++ans;//計算答案
    }
    while(c+c1+w-1>=12){
        c-=12;
        if(c<0){//糖果不夠
            c1+=c;
            c=0;
        }
        if(c1<0){//進化數不夠
            w+=c1;
            c1=0;
        }
        --w;
        ++c;
        ++c1;//計算進化數
        ++ans;//計算答案
        
    }
    cout<<ans<<endl;//輸出進化次數

    return 0;
}
/*
Input:
19 5
Output:
2
*/