#include<iostream>
#include<deque>
using namespace std;

struct point{//座標點
    int x;//x座標
    int y;//y座標
    int step;//step步數
};
int r, c;//r列數; c行數

bool bound(int x, int y){//判斷是否在界內; x, y座標
    if(x>0 && x<=r && y>0 && y<=c)
        return true;
    return false;
}

int main(){//象棋馬的移動
    int sr, sc;//sr, sc起始位置
    deque<struct point> poi_list;//poi_list待處理座標點
    struct point poi1, poi2;//poi1, poi2現處理座標點
    int dir[8][2]={{1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}};//dir方向
    int ans[21][21]={0};//ans答案，初始化以免效率過低造成崩潰
    int i, j;//i, j旗標

    while(cin>>r>>c>>sr>>sc){
        ans[sr][sc]=1;

        poi1.x=sr;
        poi1.y=sc;
        poi1.step=1;
        poi_list.push_back(poi1);

        while(poi_list.size()>0){//廣度優先搜尋
            poi1=poi_list.front();//提取最前面的座標點
            poi_list.pop_front();//刪除最前面的座標點

            for(i=0; i<8; ++i)
                if(bound(poi1.x+dir[i][0], poi1.y+dir[i][1]) && ans[poi1.x+dir[i][0]][poi1.y+dir[i][1]]==0){//如果在界內且未處理
                    ans[poi1.x+dir[i][0]][poi1.y+dir[i][1]]=poi1.step+1;

                    poi2.x=poi1.x+dir[i][0], poi2.y=poi1.y+dir[i][1];
                    poi2.step=poi1.step+1;
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
10 10 4 6
Output:
5 4 3 4 3 4 3 4 3 4
4 3 4 5 2 3 2 5 4 3
5 4 3 2 3 4 3 2 3 4
4 3 4 3 4 1 4 3 4 3
5 4 3 2 3 4 3 2 3 4
4 3 4 5 2 3 2 5 4 3
5 4 3 4 3 4 3 4 3 4
4 5 4 3 4 3 4 3 4 5
5 4 5 4 5 4 5 4 5 4
6 5 4 5 4 5 4 5 4 5
*/