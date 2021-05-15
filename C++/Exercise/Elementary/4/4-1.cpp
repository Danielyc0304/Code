#include<iostream>
#include<algorithm>
using namespace std;

struct job{//工作
    int s;//start開始時間
    int e;//end結束時間
};
bool cmp(struct job a, struct job b){//排序規則; a, b工作時間
    return a.e<b.e;
}
int main(){//工作排程 1 最多有幾個工作可以執行
    struct job a[99];//a工作時間
    int n;//n工作總數
    int s=0;//s計算值
    int ans=0;//ans答案
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>a[i].s>>a[i].e;
        sort(a, a+n, cmp);//排序

        for(i=0; i<n; ++i)
            if(s<=a[i].s){//如果工作開始時間還沒到
                ++ans;
                s=a[i].e;//到執行工作的結束時間
            }
        cout<<ans<<endl;//輸出最多可以做的工作數
        
        s=0, ans=0;//初始化
    }
    return 0;
}
/*
Input:
5
1 10
2 4
3 6
2 5
4 9
Output:
2
*/