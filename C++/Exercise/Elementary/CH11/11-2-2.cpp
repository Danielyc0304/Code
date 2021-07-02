#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

#define INF 0x6f6f6f6f//INF無限大

struct edge{//邊
    int start;//start起點
    int end;//end終點
    int distance;//distance距離
    bool operator<(const edge &a) const{//重新定義<，用於排序優先佇列
        return a.distance<distance;//距離短的在上面
    }
};
int main(){//封包傳遞
    int n, m, s, a, b;//n點總數; m邊總數; s遍歷起點; a, b節點，建立雙向圖
    priority_queue<struct edge> edg_list;//edg_list待處理邊
    deque<struct edge> edg[1000];//edg邊
    struct edge tmp, nedg;//tmp暫存值; nedg現處理邊
    bool vis[1000]={false};//vis是否被尋訪過
    int ans[1000];//ans答案
    int i;//i旗標

    memset(ans, 0x6f, sizeof(ans));//設定無限大

    while(cin>>n>>m>>s){
        for(i=0; i<m; ++i){
            cin>>a>>b>>tmp.distance;

            tmp.start=a;
            tmp.end=b;
            edg[a].push_back(tmp);

            tmp.start=b;
            tmp.end=a;
            edg[b].push_back(tmp);//建立雙向圖
        }
        nedg.start=s;
        ans[s]=0;//原點距離為0
        edg_list.push(nedg);

        while(!edg_list.empty()){//廣度優先搜尋
            nedg=edg_list.top();//提取最上面的邊
            edg_list.pop();//刪除最上面的邊

            if(vis[nedg.start]==false){//如果目標點沒被尋訪過
                vis[nedg.start]=true;//設定為已被尋訪過

                for(i=0; i<edg[nedg.start].size(); ++i)
                    if(vis[edg[nedg.start][i].end]==false)//如果目標終點沒被尋訪過
                        if(ans[edg[nedg.start][i].end]>ans[nedg.start]+edg[nedg.start][i].distance){//如果目前最短距離>目標點最短距離+目標點到目標終點的距離
                            ans[edg[nedg.start][i].end]=ans[nedg.start]+edg[nedg.start][i].distance;//更新最短距離

                            tmp.start=edg[nedg.start][i].end;
                            tmp.distance=ans[edg[nedg.start][i].end];
                            edg_list.push(tmp);//儲存邊在最後面
                        }
            }
        }
        for(i=0; i<n; ++i)
            if(ans[i]==INF)
                cout<<"點"<<i<<"無法到達\n";//輸出無法到達的點
        for(i=0; i<m; ++i)
            edg[i].clear();
        memset(vis, false, sizeof(vis)), memset(ans, 0x6f, sizeof(ans));//初始化
    }
    return 0;
}
/*
Input:
6 7 1
0 1 6
0 2 5
0 3 11
0 4 16
1 2 3
2 3 2
3 4 2
Output:
點5無法到達
*/