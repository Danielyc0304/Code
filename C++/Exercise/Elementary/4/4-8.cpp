#include<iostream>
#include<algorithm>
using namespace std;

typedef struct item{//物品
    int w;//w重量
    int f;//f取用次數
}Item;
bool cmp(Item a, Item b){//排序規則; a, b物品
    return a.w*b.f<b.w*a.f;//重量*取用次數小的在前面
}
int main(){//物品堆疊(10610第4題)
    Item a[100000];//a物品資料
    int N;//N物品總數
    long long int s=0;//s計算值
    long long int ans=0;//ans答案
    int i;//i旗標

    while(cin>>N){
        for(i=0; i<N; ++i)
            cin>>a[i].w;
        for(i=0; i<N; ++i)
            cin>>a[i].f;
        sort(a, a+N, cmp);//排序

        for(i=0; i<N-1; ++i){//貪婪演算法，把重量*取用次數小的放在最上面
            s+=a[i].w;//在第i項以上的總重，從最上面開始做
            ans+=a[i+1].f*s;//第i+1項被取用的次數*第i項以上的總重
        }
        cout<<ans<<endl;//輸出最小消耗能量

        s=0, ans=0;//初始化
    }
    return 0;
}
/*
Input:
2
20 10
1 1
Output:
10
*//*
Input:
3
3 4 5
1 2 3
Output:
19
*/