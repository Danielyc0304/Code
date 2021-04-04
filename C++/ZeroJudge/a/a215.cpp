#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, m;//n起始數字; m結束數字
    int sum=0;//sum總和
    int ans;//ans答案

    while(cin>>n>>m){
        sum=n;
        
        for(ans=1; sum<=m; ++ans)
            sum+=n+ans;
        cout<<ans<<endl;//輸出結果
    }
    return 0;
}
/*
Input:
1 5
5 10
100 1000
Output:
3
2
10
*/