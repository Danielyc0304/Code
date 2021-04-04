#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T, a, b;//T測資總數; a起始數字; b結束數字
    int ans=0;//ans答案
    int i;//i旗標

    cin>>T;

    for(i=1; i<=T; ++i){
        cin>>a>>b;

        for(; a<=b; ++a)
            if(sqrt(a)-(int)sqrt(a)==0)
                ans+=a;
        cout<<"Case "<<i<<": "<<ans<<endl;//輸出完全平方和

        ans=0;//初始化
    }
    return 0;
}
/*
Input:
2
1
5
5
35
Output:
Case 1: 5
Case 2: 50
*/