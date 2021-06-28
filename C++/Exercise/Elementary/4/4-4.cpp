#include<iostream>
#include<algorithm>
using namespace std;

struct job{//工作
    int x;//x截止時間
    int income;//income利潤
};
bool cmp1(struct job a, struct job b){//排序規則; a, b工作
    if(a.income==b.income)//如果利潤相同
        return a.x<b.x;//截止時間早的在前面
    return a.income>b.income;//利潤大的在前面
}
bool cmp2(struct job a, struct job b){//排序規則; a, b工作
    return a.x<b.x;//截止時間早的在前面
}
int main(){//工作排程 4 有截止期限的最大利潤
    struct job a[99];//a工作資料
    int n;//n工作總數
    struct job num[99];//num排序後的工作
    bool c1=false;//c1判斷
    int c2=0;//c2計數
    int ans=0;//ans答案
    int i, j;//i, j旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>a[i].x>>a[i].income;
        sort(a, a+n, cmp1);//排序

        for(i=0; i<n; ++i){//貪婪演算法
            for(j=0; j<c2; ++j)
                if(num[j].x>=a[i].x){//如果已排列的數字大於等於未排列的數字，會影響原排列結果
                    c1=true;

                    break;
                }
            while(c1==true && j<c2-1 && num[j].x==num[j+1].x)//當會影響原排列結果且不能在最後一項且前一項與後一項截止時間相同時，持續執行
                ++j;
            if(!c1 || j+1<a[i].x){//如果不會影響原排列結果或未達截止時間
                num[c2]=a[i];
                ++c2;
                
                sort(num, num+c2, cmp2);//排序
            }
            c1=false;//初始化
        }
        for(i=0; i<c2; ++i)
            ans+=num[i].income;
        cout<<ans<<endl;//輸出最大利潤

        c2=0, ans=0;//初始化
    }
    return 0;
}
/*
Input:
5
2 10
3 4
1 5
2 7
3 8
Output:
25
*/