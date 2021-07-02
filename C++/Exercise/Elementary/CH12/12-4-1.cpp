#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<cstring>
using namespace std;

deque<int> edg[100];//edg邊
bool c3[100]={false};//c3判斷
int vis[100]={0}, par[100], s=0;//vis尋訪順序; par尋訪過的最高父節點; s計算值
vector<string> ans2;//ans2答案
int ans1=0;//ans1答案

int num_conversion(string a){//轉換成數字; a字串
    auto it=find(ans2.begin(), ans2.end(), a);//宣告vector<string>的迭代器

    if(it<ans2.end())//如果有找到a
        return it-ans2.begin();
    ans2.push_back(a);//建立新資料

    return ans2.size()-1;
}
void DFS(int node, int origin){//深度優先搜尋; node節點; origin原點
    bool c2=false;//c2判斷
    int chi=0;//chi子樹數量
    int i;//i旗標

    vis[node]=par[node]=++s;

    for(i=0; i<edg[node].size(); ++i)
        if(edg[node][i]!=origin){//如果目標點不是原點
            if(vis[edg[node][i]])//如果目標點被尋訪過
                par[node]=min(par[node], vis[edg[node][i]]);//節點的判斷後尋訪順序設為(節點的判斷後尋訪順序 and 目標點的原始尋訪順序)的最小值，與第36行相關聯，當遍歷回到目標點(原點)時就判斷節點處理過後有沒有更快的捷徑
            else{//如果目標點沒被尋訪過
                ++chi;//子樹數量+1

                DFS(edg[node][i], node);

                par[node]=min(par[node], par[edg[node][i]]);//節點的判斷後尋訪順序設為(節點的判斷後尋訪順序 and 目標點的判斷後尋訪順序)的最小值-->尋找經由目標點有沒有較快的捷徑

                if(par[edg[node][i]]>=vis[node])//如果目標點的判斷後尋訪順序大於等於節點的尋訪順序
                    c2=true;//沒有捷徑-->沒有back edge
            }
        }
    if((node==origin && chi>1) || (node!=origin && c2==true)){
        c3[node]=true;
        ++ans1;
    }
}
int main(){//找出關鍵的路口
    string a, b;//a, b節點，建立無向圖
    int n, m;//n點總數; m邊總數
    int i;//i旗標

    while(cin>>n>>m){
        for(i=0; i<m; ++i){
            cin>>a>>b;
            edg[num_conversion(a)].push_back(num_conversion(b));
            edg[num_conversion(b)].push_back(num_conversion(a));//建立無向圖
        }
        DFS(0, 0);

        cout<<ans1<<endl;
        for(i=0; i<n; ++i)
            if(c3[i]>0)
                cout<<ans2[i]<<endl;//輸出關節點個數與關節點
        for(i=0; i<m; ++i)
            edg[i].clear();
        memset(c3, false, sizeof(c3)), memset(vis, 0, sizeof(vis));
        ans2.clear();
        s=0, ans1=0;//初始化
    }
    return 0;
}
/*
Input:
6 8
Ax Bx
Ax Cx
Ax Dx
Ax Ex
Bx Cx
Cx Dx
Cx Fx
Dx Ex
Output:
1
Cx
*/