#include<iostream>
#include<deque>
#include<cstring>
using namespace std;

struct point{//座標點
    int x;//x座標
    int y;//y座標
    int step;//step步數
};
bool bound(int x, int y){//判斷是否在界內; x, y座標
    if(x>=0 && x<500 && y>=0 && y<500)
        return true;
    return false;
}
int main(){//有障礙物的馬
    int n, x, y, sr, sc, tr, tc;//n障礙物總數; x, y障礙物座標; sr, sc起始位置; tr, tc目標位置
    deque<point> poi_list;//poi_list待處理座標點
    struct point poi1, poi2;//poi1, poi2座標點
    int map[499][499]={0}, dir[8][2]={{1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}}, cru[8][2]={{0, 1}, {1, 0}, {1, 0}, {0, -1}, {0, -1}, {-1, 0}, {-1, 0}, {0, 1}};//map距離; dir方向; cru拐腳位置
    int ans=0;//ans答案
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i){
            cin>>x>>y;
            map[x][y]=1;
        }
        cin>>sr>>sc>>tr>>tc;
        map[sr][sc]=2;
        map[tr][tc]=999;

        poi1.x=sr;
        poi1.y=sc;
        poi1.step=1;
        poi_list.push_back(poi1);

        while(poi_list.size()>0){
            poi1=poi_list.front();
            poi_list.pop_front();

            for(i=0; i<8; ++i){
                if(bound(poi1.x+cru[i][0], poi1.y+cru[i][1]) && map[poi1.x+cru[i][0]][poi1.y+cru[i][1]]!=1){
                    if(bound(poi1.x+dir[i][0], poi1.y+dir[i][1]) && map[poi1.x+dir[i][0]][poi1.y+dir[i][1]]==0){
                        map[poi1.x+dir[i][0]][poi1.y+dir[i][1]]=2;

                        poi2.x=poi1.x+dir[i][0], poi2.y=poi1.y+dir[i][1];
                        poi2.step=poi1.step+1;
                        poi_list.push_back(poi2);
                    }
                    if(bound(poi1.x+dir[i][0], poi1.y+dir[i][1]) && map[poi1.x+dir[i][0]][poi1.y+dir[i][1]]==999){
                        ans=poi1.step+1;

                        poi_list.clear();

                        break;
                    }
                }
            }
        }
        if(ans==0)
            cout<<"無法到達\n";
        else
            cout<<ans<<endl;
        memset(map, 0, sizeof(map));
        ans=0;//初始化
    }
    return 0;
}
/*
Input:
3
1 3
2 3
3 3
1 2
3 6
Output:
5
*//*
Input:
4
1 3
2 0
2 1
2 2
1 2
3 6
Output:
無法到達
*/