#include<iostream>
using namespace std;

int main(){//The 3n+1 problem (ACM100)
    int i, j;//i起始數字; j結束數字
    int n, tmp;//n次數; tmp暫存值
    int ans=0;//ans答案

    while(cin>>i>>j){
        cout<<i<<' '<<j<<' ';

        if(i>j)
            swap(i, j);
        for(; i<=j; ++i){
            tmp=i;

            for(n=1; tmp!=1; ++n){
                if(tmp%2==1)
                    tmp=3*tmp+1;
                else
                    tmp/=2;
            }
            ans=max(ans, n);
        }
        cout<<ans<<endl;//輸出最大次數

        ans=0;//初始化
    }
    return 0;
}
/*
Input:
1 10
10 1
100 200
201 210
900 1000
Output:
1 10 20
10 1 20
100 200 125
201 210 89
900 1000 174
*/