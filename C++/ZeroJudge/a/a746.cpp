#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[503][503];
    int n, m, x, y;
    int tmpx=0, tmpy=0;
    int i, j, k;
    
    memset(a, ' ', sizeof(a));

    while(cin>>n>>m){
        for(i=0; i<=n+1; ++i){
            a[0][i]='-';
            a[n+1][i]='-';
        }
        for(i=1; i<=n; ++i){
            a[i][0]='|';
            a[i][n+1]='|';
        }
        for(i=0; i<m; ++i){
            cin>>x>>y;

            if(x==tmpx){
                if(y>tmpy)
                    for(j=tmpy; j<=y; ++j)
                        a[x][j]='*';
                else
                    for(j=y; j<=tmpy; ++j)
                        a[x][j]='*';
            }
            else if(y==tmpy){
                if(x>tmpx)
                    for(j=tmpx; j<=x; ++j)
                        a[j][y]='*';
                else
                    for(j=x; j<=tmpx; ++j)
                        a[j][y]='*';
            }
            tmpx=x;
            tmpy=y;
        }
        for(i=0; i<=n+1; ++i){
            for(j=0; j<=n+1; ++j)
                cout<<a[i][j];
            cout<<endl;
        }
        memset(a, ' ', sizeof(a));
        tmpx=0, tmpy=0;
    }
    return 0;
}