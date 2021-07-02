#include<iostream>
#include<deque>
#include<cstring>
using namespace std;

int main(){//拓撲排序
    int n, m, a, b;//n點總數; m邊總數; a起點, b終點，建立有向圖
    deque<int> edg[50];//edg邊
    int c1[50]={0}, c2=0;//c1, c2計數
    int i, j;//i, j旗標

    while(cin>>n>>m){
        for(i=0; i<m; ++i){
            cin>>a>>b;
            edg[a].push_back(b);//建立有向圖
            ++c1[b];//連到b點的邊總數+1
        }
        for(i=0; i<n; ++i){
            if(c1[i]==0){//如果沒有邊連到i點
                cout<<i<<' ';

                ++c2;
                for(j=0; j<edg[i].size(); ++j)//刪除從i點連出的邊
                    --c1[edg[i][j]];
            }
            if(c2==n)//如果所有點都已找到
                break;
            else if(i==n-1)//如果已經遍歷完，但未找到所有點
                i=0;
        }
        cout<<endl;//輸出結果

        for(i=0; i<n; ++i)
            edg[i].clear();
        memset(c1, 0, sizeof(c1));
        c2=0;//初始化
    }
    return 0;
}
/*
Input:
5 7
0 1
0 2
0 3
0 4
2 3
3 4
4 1
Output:
0 2 3 4 1
*/