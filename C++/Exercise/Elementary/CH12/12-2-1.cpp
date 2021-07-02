#include<iostream>
#include<deque>
#include<cstring>
using namespace std;

deque<int> edg[20];//edg邊
bool vis[20]={false};//是否被尋訪過

void DFS(int node){//深度優先搜尋; node節點
    int i;//i旗標

    vis[node]=true;//設定為已被尋訪過

    for(i=0; i<edg[node].size(); ++i)
        if(vis[edg[node][i]]==false)//如果還沒被尋訪過
            DFS(edg[node][i]);
}
int main(){//尤拉路徑
    int m, a, b;//m邊總數; a起點, b終點，建立有向圖
    bool use[20]={false}, c3=false;//use已經輸入過的點; c3判斷
    int in[20]={0}, out[20]={0}, c1=0, c2=0, sum=0, sta;//in連接到點的邊; out從點連出的邊; c1, c2, c3計數; sta遍歷起點
    int i;//i旗標

    while(cin>>m){
        for(i=0; i<m; ++i){
            cin>>a>>b;
            edg[a].push_back(b);//建立有向圖
            ++in[b];//連接到b點的邊+1
            ++out[a];//從a點連出的邊+1
            use[a]=true;
            use[b]=true;//紀錄輸入過的點
        }
        for(i=0; i<20; ++i){
            if(use[i]==true)
                ++sum;//計算點總數
            if(in[i]!=out[i]){//如果連到i點的邊不等於從i點連出的邊
                if(in[i]-out[i]==1) ++c1;//如果進入的邊比出去的邊多一，此點為終點
                else if(out[i]-in[i]==1) ++c2, sta=i;//如果出去的邊比進入的邊多一，從此點為起點開始遍歷
                else break;//如果相差不只一
            }
        }
        if((c1==0 && c2==0) || (c1==1 && c2==1))//如果(有找到起點且有找到終點)或(未找到起點且未找到終點)
            c3=true;//有可能找得到尤拉路徑
        if(c3==true){
            if(c2==1)//如果有找到起點
                DFS(sta);
            else if(c2==0)//如果未找到起點
                for(i=0; i<20; ++i)//逐一尋訪
                    if(out[i]>0){//如果有邊從i點出去
                        DFS(i);

                        break;
                    }
            for(i=0; i<20; ++i)
                if(use[i]==true && vis[i]==false){//檢查是否有被輸入的點沒被尋訪
                    c3=false;

                    break;
                }
        }
        if(c3==true)
            cout<<"可以找到尤拉路徑\n";
        else
            cout<<"無法找到尤拉路徑\n";//輸出結果
        for(i=0; i<20; ++i)
            edg[i].clear();
        memset(vis, false, sizeof(vis)), memset(use, false, sizeof(use)), memset(in, 0, sizeof(in)), memset(out, 0, sizeof(out));
        c3=false, c1=0, c2=0, sum=0;//初始化
    }
    return 0;
}
/*
Input:
5
0 1
1 4
4 5
5 6
6 0
Output:
可以找到尤拉路徑
*//*
Input:
5
0 1
1 4
4 5
7 6
6 7
Output:
無法找到尤拉路徑
*/