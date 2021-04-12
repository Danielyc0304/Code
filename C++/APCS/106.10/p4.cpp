#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct data{//資料
    int weight;//weight重量
    int frequency;//frequency取用次數
};
bool cmp(struct data a, struct data b){//排序規則; a, b資料
    return a.weight*b.frequency<b.weight*a.frequency;//重量*被拿取的次數小的在前面
}
int main(){
    struct data a[100000];//a資料
    int N;//N總數
    int s=0;//s運算值
    int ans=0;//ans答案
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>a[i].weight;
    for(i=0; i<N; ++i)
        cin>>a[i].frequency;
    sort(a, a+N, cmp);//排序

    for(i=0; i<N-1; ++i){
        s+=a[i].weight;//在第i項以上的總重
        ans+=a[i+1].frequency*s;//第i項以上被拿取的次數
    }
    cout<<ans<<endl;//輸出結果

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