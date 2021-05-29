#include<iostream>
#include<algorithm>
using namespace std;

struct item{//物品
    int w;//w重量
    int v;//v價值
    double v_per_w;//每單位價值
};
bool cmp(struct item a, struct item b){//排序規則; a, b資料
    return a.v_per_w>b.v_per_w;//每單位價值高的在前面
}
int main(){//物品可以分割的背包(Fractional Knapsack)問題
    struct item a[99];//a物品資料
    int n, k;//n物品總數; k背包負重
    double ans=0;//ans答案
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i){
            cin>>a[i].w>>a[i].v;

            a[i].v_per_w=(double)a[i].v/a[i].w;
        }
        cin>>k;

        sort(a, a+n, cmp);//排序

        for(i=0; i<n; ++i){//貪婪演算法，單位價值高的先放
            if(a[i].w<=k){//如果夠放下整個物品
                ans+=a[i].v;
                k-=a[i].w;
            }
            else{//如果不夠放下整個物品
                ans+=a[i].v_per_w*k;//分割

                break;
            }
        }
        cout<<ans<<endl;//輸出最大可放的價值
    }
    return 0;
}
/*
Input:
5 
3 10
3 4
1 5
2 7
3 8
5
Output:
18.6667
*/