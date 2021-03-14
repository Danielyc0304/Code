#include<iostream>
using namespace std;

int main(){
    int num[501][501], n, m, x1, x2, y1, y2;
    int sum[501][501];
    int ans=0;
    int i, j;

    while(cin>>n>>m){
        for(i=1; i<=n; ++i)
            for(j=1; j<=n; ++j){
                cin>>num[i][j];
                
                sum[i][j]=sum[i][j-1]+num[i][j];
            }
        for(i=0; i<m; ++i){
            cin>>x1>>y1>>x2>>y2;

            for(; x1<=x2; ++x1)
                ans+=sum[x1][y2]-sum[x1][y1-1];
            cout<<ans<<endl;

            ans=0;
        }
    }
    return 0;
}