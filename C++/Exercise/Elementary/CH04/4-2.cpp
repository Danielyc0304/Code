#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

struct job{//工作
    int s;//開始時間
    int e;//結束時間
};
bool cmp(struct job a, struct job b){//排序規則; a, b工作時間
    if(a.s==b.s)//如果開始時間相同
        return a.e<b.e;//結束時間早的在前面
    return a.s<b.s;//開始時間早的在前面
}
int main(){//工作排程2-最多有幾台機器一起運作
    struct job a[99];//a工作時間
    int n;//n工作總數
    bool c=false;//c判斷
    int use[99];//use機器使用
    int ans=0;//ans答案
    int i, j;//i, j旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>a[i].s>>a[i].e;
        sort(a, a+n, cmp);//排序

        for(i=0; i<n; ++i){//貪婪演算法，開始時間早的在前面，如果沒有空閒機器就多開一台
            for(j=0; j<ans; ++j)
                if(use[j]<=a[i].s){//如果機器空閒
                    use[j]=a[i].e;//機器時間設為工作結束時間
                    c=true;//有找到空閒的機器

                    break;
                }
            if(!c){//如果沒找到空閒的機器
                use[ans]=a[i].e;//開新的機器
                ++ans;
            }
            c=false;//初始化
        }
        cout<<ans<<endl;//輸出最多幾台一起運作

        ans=0;//初始化
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
4
*/