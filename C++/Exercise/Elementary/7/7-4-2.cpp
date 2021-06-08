#include<iostream>
#include<cstring>
using namespace std;

int main(){//換零錢—考慮最佳解路徑
    int v[9], n, x;//v面額; n面額總數; x目標金額
    int ans1[49999], ans2[49999];//ans1, ans2答案
    int i, j;//i, j旗標

    memset(ans1, 0x6f, sizeof(ans1));//初始化mon為0x6f
    
    ans1[0]=0;//0元不需要硬幣

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>v[i];
        cin>>x;

        for(i=0; i<n; ++i)
            for(j=v[i]; j<=x; ++j)
                if(ans1[j]>ans1[j-v[i]]+1){//如果mon[j-v[i]]+1個硬幣(1個硬幣價值為v[i]，剛好等於mon[j])比原本的硬幣數少
                    ans1[j]=ans1[j-v[i]]+1;
                    ans2[j]=v[i];
                }
        cout<<ans1[x]<<endl;//輸出最少硬幣

        while(x>0){
            cout<<ans2[x]<<' ';//輸出使用的面額

            x-=ans2[x];
        }
        cout<<endl;

        memset(ans1, 0x6f, sizeof(ans1)), memset(ans2, 0, sizeof(ans2));//初始化
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
9 9 1 1
*/