#include<iostream>
#include<cstring>
using namespace std;

int main(){//哪條路可以容納最多車子的數量
    int n, m, a, b, dis;//n點總數; m邊總數; a起點, b終點，建立雙向圖; dis距離
    int ans[100][100];//ans答案
    int i, j, k;//i, j, k旗標

    memset(ans, -1, sizeof(ans));

    while(cin>>n>>m){
        for(i=0; i<n; ++i)
            ans[i][i]=0;
        for(i=0; i<m; ++i){
            cin>>a>>b>>dis;
            ans[a][b]=dis;
            ans[b][a]=dis;//建立雙向圖
        }
        for(i=0; i<n; ++i)//i為中轉點
            for(j=0; j<n; ++j)
                for(k=0; k<n; ++k)
                    if(j!=k && ans[j][i]!=-1 && ans[i][k]!=-1)//如果起點與終點不相等且起點到中轉點或中轉點到終點有路
                        ans[j][k]=max(ans[j][k], min(ans[j][i], ans[i][k]));
        for(i=0; i<n; ++i){
            for(j=0; j<n; ++j)
                cout<<ans[i][j]<<' ';
            cout<<endl;//輸出所有點到其他點可容納的最多車子數量
        }
    }
    return 0;
}
/*
Input:
5 7
0 1 6
0 2 5
0 3 11
0 4 16
1 2 3
2 3 2
3 4 2
Output:
0 6 5 11 16
6 0 5 6 6
5 5 0 5 5
11 6 5 0 11
16 6 5 11 0
*/