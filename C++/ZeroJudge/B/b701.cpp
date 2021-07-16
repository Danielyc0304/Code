#include<iostream>
using namespace std;

int map[512][512];//map地圖
int ans1, ans2, ans3, ans4, ans5=0;//ans1, ans2, ans3, ans4, ans5答案

void DFS(int x, int y){//深度優先搜尋; x, y座標
    ++ans5;
    map[x][y]=0;

    if(map[x][y-1]==1){
        if(ans1>y-1)//極西
            ans1=y-1;
        DFS(x, y-1);
    }
    if(map[x-1][y]==1){
        if(ans2>x-1)//極北
            ans2=x-1;
        DFS(x-1, y);
    }
    if(map[x][y+1]==1){
        if(ans3<y+1)//極東
            ans3=y+1;
        DFS(x, y+1);
    }
    if(map[x+1][y]==1){
        if(ans4<x+1)//極南
            ans4=x+1;
        DFS(x+1, y);
    }
}
int main(){//我的領土有多大
    int X, Y;//X軸長度; Y軸長度
    int i, j;//i, j旗標

    cin>>X>>Y;
    for(i=0; i<X; ++i)
        for(j=0; j<Y; ++j)
            cin>>map[i][j];
    for(i=0; i<X; ++i)
        for(j=0; j<Y; ++j)
            if(map[i][j]==1){
                ans1=j, ans2=i, ans3=j, ans4=i;//初始化

                DFS(i, j);

                cout<<ans1<<' '<<ans2<<' '<<ans3<<' '<<ans4<<' '<<ans5<<endl;//輸出極西、極北、極東、極南、面積

                ans5=0;//初始化
            }
    return 0;
}
/*
Input:
16 16
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 1 1 1 0 0 0 0 0 0 0
0 0 0 0 0 0 1 1 1 0 0 0 0 0 0 0
0 0 0 0 0 1 1 1 1 1 1 0 0 0 0 0
0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0
0 0 0 0 0 1 1 1 1 1 1 1 1 0 0 0
0 0 0 0 0 0 1 1 1 1 0 0 0 0 0 0
0 0 0 0 0 0 1 1 0 1 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 1 0 0 0 0 0 1 1 0 0 0 0
0 0 1 0 1 0 0 0 0 1 1 1 1 1 0 0
0 0 1 1 1 0 0 0 0 0 1 1 0 0 0 0
0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Output:
4 2 12 9 36
2 11 4 14 7
9 11 13 13 9
*/