#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){//Special Touring Car Racing
    int num[31]={0}, n;//num停留點位置; n停留點總數
    int min[31], pat[31]={0};//min最小值; pat路徑
    int ans[30];//ans答案
    int i, j;//i旗標

    memset(min, 0x6f, sizeof(min));//設定極大值
    min[0]=0;

    while(cin>>n){
        if(n==0)
            break;
        for(i=1; i<=n; ++i)
            cin>>num[i];
        for(i=1; i<=n; ++i)//動態規劃
            for(j=0; j<i; ++j)//每個點都檢查
                if(min[i]>min[j]+pow(200-num[i]+num[j], 2)){//如果懲罰最小值大於(j點的懲罰最小值+從j點到i點的懲罰)，pow(200-(num[i]-num[j]), 2)
                    min[i]=min[j]+pow(200-num[i]+num[j], 2);//更新最小值，pow(200-(num[i]-num[j]), 2)
                    pat[i]=j;//i點的前一點為j點
                }
        ans[0]=n;//反序遍歷
        for(i=1; n!=0; ++i){//如果沒有找到起點0就持續執行
            ans[i]=pat[n];//輸入n點的前一點
            n=pat[n];//更新n
        }
        for(--i; i>=0; --i)
            cout<<ans[i]<<' ';
        cout<<endl;//反序輸出

        memset(num, 0, sizeof(num)), memset(min, 0x6f, sizeof(min)), memset(pat, 0, sizeof(pat));
        min[0]=0;//初始化
    }
    return 0;
}
/*
Input:
4
190 260 385 540
5
130 180 230 330 450
0
Output:
0 1 3 4
0 3 5
*/