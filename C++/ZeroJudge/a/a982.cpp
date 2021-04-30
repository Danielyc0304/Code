#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

struct coordinate{//座標
    int x;//x座標
    int y;//y座標
};
int main(){//迷宮問題#1
    queue<coordinate> coo_list;//coo_list待處理座標
    struct coordinate coo;//coo現處理座標
    char a[101][101];//迷宮
    int N;//N邊長
    int dis[100][100], dir[4][2]={{0, 1}, {1, 0}, {0, -1}, {-1, 0}}, x, y;//dis距離; dir方向; x, y座標
    int i, j;//i, j旗標

    cin>>N;

    memset(dis, 0, sizeof(dis));
    dis[1][1]=1;
    coo_list.push({1, 1});//初始化

    for(i=0; i<N; ++i)
        for(j=0; j<N; ++j)
            cin>>a[i][j];
    while(coo_list.empty()==0){//廣度優先搜尋(BFS)，如果清單不是空的就持續執行
        coo=coo_list.front();//提取最前面的座標
        coo_list.pop();//刪除最前面的座標

        for(i=0; i<4; ++i){
            x=coo.x+dir[i][0];
            y=coo.y+dir[i][1];//最前面的資料加上方向
            
            if(a[x][y]=='.' && dis[x][y]==0){//如果座標有路而且未處理
                dis[x][y]=dis[coo.x][coo.y]+1;

                coo_list.push({x, y});//儲存座標在最後面
            }
        }
        if(dis[N-2][N-2]!=0)//如果目標地點已被處理
            break;
    }
    if(dis[N-2][N-2]==0)//如果目標地點未被處理
        cout<<"No solution!\n";
    else
        cout<<dis[N-2][N-2]<<endl;
    return 0;
}
/*
Input:
9
#########
#.......#
#.#####.#
#.......#
##.#.####
#..#.#..#
#.##.##.#
#.......#
#########
Output:
13
*/