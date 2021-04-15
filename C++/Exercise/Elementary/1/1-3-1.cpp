#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define MAX 100

int main(){//定義常數
    const double PI=acos(-1.0);//PI圓周率
    int num[MAX];//num數字
    int i;//i旗標

    for(i=0; i<MAX; ++i){
        num[i]=i;
        cout<<num[i]<<' ';//輸出結果
    }
    cout<<endl;
    cout<<setprecision(15)<<PI<<endl;//輸出圓周率
    
    return 0;
}