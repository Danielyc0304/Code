#include<iostream>
#include<map>
#include<queue>
using namespace std;

struct edge{//邊
    int start;//start起點
    int end;//end終點
    int weights;//weights權重
};
int n;//n點總數
map<string, int> tmp1;//tmp1暫存值
deque<struct edge> edg[100];//edg邊
struct edge tmp2;//tmp2暫存值

int num_conversion(string a){//轉換成數字; a字串
    if(tmp1.find(a)==tmp1.end())//如果沒有找到a
        tmp1[a]=tmp1.size();//建立新資料
    return tmp1[a];//回傳a的value
}
bool traverse(int node){
    queue<struct edge> edg_list;//待處理邊
    struct edge nedg;//nedg現處理邊
    bool c1[100]={false};//c1判斷
    int c2[100], dis[100];//c2計數; dis距離起點的最短距離
    int i;//i旗標

    nedg.start=node;
    dis[node]=0;//原點距離為0
    edg_list.push(nedg);
    c1[node]=true;//設定點node在edg_list裡面

    while(!edg_list.empty()){//廣度優先搜尋
        nedg=edg_list.front();//提取最上面的邊
        edg_list.pop();//刪除最上面的邊

        c1[nedg.start]=false;//設定點nedg.start不在edg_list裡面

        for(i=0; i<edg[nedg.start].size(); ++i){
            if(dis[edg[nedg.start][i].end]>dis[nedg.start]+edg[nedg.start][i].weights){//如果目前最短距離>目標點最短距離+目標點到目標終點的距離
                ++c2[edg[nedg.start][i].end];

                if(c2[edg[nedg.start][i].end]>=n)
                    return true;
                dis[edg[nedg.start][i].end]=dis[nedg.start]+edg[nedg.start][i].weights;//更新最短距離

                if(c1[edg[nedg.start][i].end]==false){//如果終點不在edg_list裡面
                    tmp2.start=edg[nedg.start][i].end;
                    edg_list.push(tmp2);//儲存邊在最後面
                    c1[tmp2.start]=true;//設定點tmp2.start在edg_list裡面
                }
            }
        }
    }
    return false;
}
int main(){//使用Bellman Ford偵測負環
    string a, b;//a起點, b終點，建立有向圖
    int m;//m邊總數
    bool c=false;//c判斷
    int i;//i旗標

    while(cin>>n>>m){
        for(i=0; i<m; ++i){
            cin>>a>>b>>tmp2.weights;

            tmp2.start=num_conversion(a);
            tmp2.end=num_conversion(b);
            edg[num_conversion(a)].push_back(tmp2);//建立有向圖
        }
        for(i=0; i<m; ++i)
            if(edg[i].size()>0){
                c=traverse(i);

                if(c==true)
                    break;
            }
        if(c==true)
            cout<<"找到負環\n";
        else
            cout<<"找不到負環\n";//輸出結果
        tmp1.clear();
        for(i=0; i<n; ++i)
            edg[i].clear();
        c=false;//初始化
    }
    return 0;
}
/*
Input:
5 7
Ax Bx 6
Ax Ex 16
Bx Cx -3
Cx Ax 5
Cx Dx -2
Dx Ax -2
Dx Ex 2
Output:
找到負環
*/