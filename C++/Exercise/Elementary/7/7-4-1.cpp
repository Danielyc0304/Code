#include<iostream>
#include<cstring>
using namespace std;

int main(){//換零錢—不考慮最佳解路徑
    int v[9], n, x;//v面額; n面額總數; x目標金額
    int ans[49999];//ans答案
    int i, j;//i, j旗標

    memset(ans, 0x6f, sizeof(ans));

    ans[0]=0;//0元不需要硬幣

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>v[i];
        cin>>x;

        for(i=0; i<n; ++i)
            for(j=v[i]; j<=x; ++j)
                if(ans[j]>ans[j-v[i]]+1)//如果ans[j-v[i]]+1個硬幣(1個硬幣價值為v[i]，剛好等於ans[j])比原本的硬幣數少
                    ans[j]=ans[j-v[i]]+1;
        cout<<ans[x]<<endl;//輸出最少硬幣

        memset(ans, 0x6f, sizeof(ans));//初始化
    }
    return 0;
}
/*
Input:
4
4
1
9
13
20
Output:
4
*/