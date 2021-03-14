#include<iostream>
#include<queue>
using namespace std;

struct coordinate{
    int x;
    int y;
};
int main(){
    queue<coordinate> coo1;
    struct coordinate coo2;
    char a[101][101];
    int N;
    int dis[101][101], dir[5][3]={{-1, 0}, {1, 0}, {0, 1}, {0, -1}}, x, y;
    int i, j;

    cin>>N;

    for(i=0; i<N; ++i)
        for(j=0; j<N; ++j)
            dis[i][j]=-1;
    dis[1][1]=1;
    coo1.push({1, 1});

    for(i=0; i<N; ++i)
        for(j=0; j<N; ++j)
            cin>>a[i][j];
    while(!coo1.empty()){
        coo2=coo1.front();
        coo1.pop();

        for(i=0; i<4; ++i){
            x=coo2.x+dir[i][0];
            y=coo2.y+dir[i][1];
            
            if(a[x][y]=='.' && dis[x][y]==-1){
                dis[x][y]=dis[coo2.x][coo2.y]+1;

                coo1.push({x, y});
            }
        }
        if(dis[N-2][N-2]!=-1)
            break;
    }
    if(dis[N-2][N-2]==-1)
        cout<<"No solution!\n";
    else
        cout<<dis[N-2][N-2]<<endl;
    return 0;
}