#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){//The Tower of Hanoi
    int sta[30], end[30], n;//a原排列; b目標排列; n磁盤總數
    int to[30], sub, loc;//to要到的位置; sub子塔層數; loc子塔位置
    int ans=0;//ans答案
    int i;//i旗標

    while(cin>>n){
        if(n==0)
            break;
        for(i=0; i<n; ++i)
            cin>>sta[i];
        for(i=0; i<n; ++i)
            cin>>end[i];
        for(--n; sta[n]==end[n] && n>=0; --n);//找出最下面不同位置的盤子
        
        if(n>=0){
            for(sub=0; sta[sub+1]==sta[0] && sub<n-1; ++sub);//找出子塔層數
            
            to[n]=end[n];

            for(i=n; i>0; --i){//設定要到的位置
                if(sta[i]==to[i])//如果已經定位
                    to[i-1]=to[i];//可以在上面放盤子
                else//如果還沒定位-->需要移動
                    to[i-1]=6-sta[i]-to[i];//不能在上面放盤子
            }
            loc=sta[sub];
            for(i=sub+1; i<=n; ++i){//從子塔下方由上而下移動
                if(sta[i]==to[i])//如果已經定位
                    continue;//不執行下面程式碼
                if(sta[i]+to[i]+loc==6)//如果子塔不在起點且不在要到的點-->可以直接移動第i個盤子
                    ++ans;
                else{
                    ans+=pow(2, sub+1);//移動高度為sub+1的子塔(2的sub+1次方-1)+移動目標的一步
                    sub=i-1;//更新子塔層數
                    loc=6-sta[i]-to[i];//更新子塔位置(起始點與要到的點之外的柱子)
                }
            }
            loc=to[n-1];//更新子塔位置
            for(i=sub; i>=0; --i){
                if(loc==end[i])//如果已經定位
                    continue;//不執行下面程式碼
                loc=6-loc-end[i];//更新子塔位置(現在子塔位置與終點之外的柱子)
                ans+=pow(2, i);//移動高度為i的子塔(2的i次方-1)+移動目標的一步
            }
            cout<<ans<<endl;//輸出最少步數

            ans=0;//初始化
        }
        else
            cout<<0<<endl;//輸出0
    }
    return 0;
}
/*
Input:
4
1 1 1 1
1 2 2 1
3
1 1 1
2 2 2
3
1 2 3
3 2 1
4
1 1 1 1
1 1 1 1
0
Output:
6
7
3
0
*/