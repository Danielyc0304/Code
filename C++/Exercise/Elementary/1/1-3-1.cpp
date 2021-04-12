#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define MAX 100

int main(){//定義常數
    const double PI=acos(-1.0);
    int num[MAX];
    int i;

    for(i=0; i<MAX; ++i){
        num[i]=i;
        cout<<num[i]<<' ';
    }
    cout<<endl;
    cout<<setprecision(15)<<PI<<endl;
    
    return 0;
}