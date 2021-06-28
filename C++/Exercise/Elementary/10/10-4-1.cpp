#include<iostream>
#include<deque>
using namespace std;

struct point{//座標點
    int x;//x座標
    int y;//y座標
    int distance;//distance距離
};
int r, c;//r列數; c行數

bool bound(int x, int y){//判斷是否在界內; x, y座標
    if(x>0 && x<=r && y>0 && y<=c)
        return true;
    return false;
}
int main(){//迷宮
    int a[101][101];//a迷宮
    deque<struct point> poi_list;//poi_list待處理座標點
    struct point poi1, poi2;//poi1, poi2現處理座標點
    int dir[4][2]={{0, 1}, {1, 0}, {0, -1}, {-1, 0}};//dir方向
    int ans[101][101];//ans答案
    int i, j;//i, j旗標

    while(cin>>r>>c){
        for(i=1; i<=r; ++i)
            for(j=1; j<=c; ++j)
                cin>>a[i][j];
        cin>>poi1.x>>poi1.y;

        poi1.distance=1;

        ans[poi1.x][poi1.y]=1;
        
        poi_list.push_back(poi1);

        while(poi_list.size()>0){//廣度優先搜尋
            poi1=poi_list.front();//提取最前面的座標點
            poi_list.pop_front();//刪除最前面的座標點

            for(i=0; i<4; ++i)
                if(bound(poi1.x+dir[i][0], poi1.y+dir[i][1]) && a[poi1.x+dir[i][0]][poi1.y+dir[i][1]]==1 && ans[poi1.x+dir[i][0]][poi1.y+dir[i][1]]==0){//如果在界內且座標點有路且未處理
                    ans[poi1.x+dir[i][0]][poi1.y+dir[i][1]]=poi1.distance+1;

                    poi2.x=poi1.x+dir[i][0], poi2.y=poi1.y+dir[i][1];
                    poi2.distance=poi1.distance+1;
                    poi_list.push_back(poi2);//儲存座標在最後面
                }
        }
        for(i=1; i<=r; ++i){
            for(j=1; j<=c; ++j)
                cout<<ans[i][j]<<' ';
            cout<<endl;//輸出到達所有座標點的最短路徑
        }
    }
    return 0;
}
/*
Input:
5 6
0 1 1 1 1 0
0 0 1 1 0 0
0 1 1 1 0 0
1 1 1 1 0 1
1 1 1 1 1 1
3 4
Output:
0 5 4 3 4 0
0 0 3 2 0 0
0 3 2 1 0 0
5 4 3 2 0 6
6 5 4 3 4 5
*/