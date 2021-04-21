#include<iostream>
using namespace std;

int main(){//吞食天地二
    int num[500][500], n, m, x1, y1, x2, y2;//num數字; n數字總數; m吃的總數; x1, y1, x2, y2吃的範圍
    int sum[500][500]={0};//sum總和
    int ans=0;//ans答案
    int i, j;//i, j旗標

    while(cin>>n>>m){
        for(i=1; i<=n; ++i)
            for(j=1; j<=n; ++j){
                cin>>num[i][j];
                
                sum[i][j]=sum[i][j-1]+num[i][j];//sum[i][n]=num[i][1]加到num[i][n]，每行一串
            }
        for(i=0; i<m; ++i){
            cin>>x1>>y1>>x2>>y2;

            for(; x1<=x2; ++x1)
                ans+=sum[x1][y2]-sum[x1][y1-1];
            cout<<ans<<endl;//輸出結果

            ans=0;//初始化
        }
    }
    return 0;
}
/*
Input:
3 3
1 2 3
4 5 6
7 8 9
1 1 3 3
1 1 1 3
1 1 3 1
Output:
45
6
12
*/