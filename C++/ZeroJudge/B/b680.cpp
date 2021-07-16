#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct data{//資料
    int num;//num數字
    double time;//time時間
};
bool cmp(struct data a, struct data b){//排序規則; a, b資料
    return a.time<b.time;//時間短的在前面
}
int main(){//百米賽道編排
    vector<struct data> tea[25];//tea編組
    struct data a[200];//a資料
    int N;//N人數
    int i, j=-1, k;//i, j, k旗標

    cin>>N;
    for(i=0; i<N; ++i)
        cin>>a[i].num>>a[i].time;
    sort(a, a+N, cmp);

    k=N/8;
    if(N%8!=0)//不能整除
        ++k;//多加一組
    for(i=0; i<N; ){//S形排序
        if(j==-1)//從第一組排到最後一組
            for(++j; j<k; ++j){
                tea[j].push_back(a[i]);
                ++i;
            }
        else//從最後一組排到第一組
            for(--j; j>=0; --j){
                tea[j].push_back(a[i]);
                ++i;
            }
    }
    for(i=0; i<k; ++i)
        cout<<i+1<<' '<<tea[i][6].num<<' '<<tea[i][4].num<<' '<<tea[i][2].num<<' '<<tea[i][0].num<<' '<<tea[i][1].num<<' '<<tea[i][3].num<<' '<<tea[i][5].num<<' '<<tea[i][7].num<<endl;//輸出編組第一道到第八道
    return 0;
}
/*
Input:
16
1 10.80
2 10.35
3 10.02
4 10.44
5 11.32
6 09.93
7 11.52
8 11.53
9 12.34
10 11.42
11 10.32
12 10.28
13 12.21
14 12.54
15 12.26
16 13.40
Output:
1 15 10 2 6 11 5 13 16
2 9 7 4 3 12 1 8 14
*/