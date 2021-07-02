#include<iostream>
#include<cstring>
using namespace std;

int main(){//01背包—不考慮最佳解路徑
    int w[99], v[99], n, ks;//w物品重量; v物品價值; n物品總數; ks背包負重
    int ans[999]={0};//ans答案
    int i, j;//i, j旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>w[i]>>v[i];
        cin>>ks;

        for(i=0; i<n; ++i)
            for(j=ks; j>=w[i]; --j)//從最大負重往前找到w[i]-->從wei[j]往前找到wei[j-w[i]]
                if(ans[j-w[i]]+v[i]>ans[j])//如果第j-w[i]可以放下w[i](可把所有東西拿起來只放新的)，且新的價值比較高
                    ans[j]=ans[j-w[i]]+v[i]; 
        cout<<"背包最大的價值為"<<ans[ks]<<endl;//輸出最大價值

        memset(ans, 0, sizeof(ans));//初始化
    }
    return 0;
}
/*
Input:
4
3 20
4 45
9 70
12 85
12
Output:
背包最大的價值為90
*/