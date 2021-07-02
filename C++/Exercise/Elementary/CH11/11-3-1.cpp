#include<iostream>
#include<map>
#include<queue>
#include<cstring>
using namespace std;

struct edge{//邊
    int start;//start起點
    int end;//end終點
    int weights;//weights權重
};
map<string, int> tmp1;

int num_conversion(string a){//轉換成數字; a字串
    if(tmp1.find(a)==tmp1.end())//如果沒有找到a
        tmp1[a]=tmp1.size();//建立新資料
    return tmp1[a];//回傳a的value
}
int main(){//使用Bellman Ford找最短路徑
    string a, b, sta;//a起點, b終點，建立有向圖; sta遍歷起點
    int n, m;//n點總數; m邊總數
    queue<struct edge> edg_list;//edg_list待處理邊
    deque<struct edge> edg[100];//edg邊
    struct edge tmp2, nedg;//tmp2暫存值; nedg現處理邊
    bool c[100]={false};//c判斷
    int ans[100];//ans答案
    int i;//i旗標

    memset(ans, 0x6f, sizeof(ans));//設定極大值
    
    cin>>n>>m;
    for(i=0; i<m; ++i){
        cin>>a>>b>>tmp2.weights;

        tmp2.start=num_conversion(a);
        tmp2.end=num_conversion(b);
        edg[num_conversion(a)].push_back(tmp2);//建立有向圖
    }
    cin>>sta;
    nedg.start=num_conversion(sta);
    ans[num_conversion(sta)]=0;//原點距離為0
    edg_list.push(nedg);
    c[num_conversion(sta)]=true;//設定點sta在edg_list裡面
    
    while(!edg_list.empty()){//廣度優先搜尋
        nedg=edg_list.front();//提取最上面的邊
        edg_list.pop();//刪除最上面的邊

        c[nedg.start]=false;//設定點nedg.start不在edg_list裡面

        for(i=0; i<edg[nedg.start].size(); ++i)
            if(ans[edg[nedg.start][i].end]>ans[nedg.start]+edg[nedg.start][i].weights){//如果目前最短距離>目標點最短距離+目標點到目標終點的距離
                ans[edg[nedg.start][i].end]=ans[nedg.start]+edg[nedg.start][i].weights;//更新最短距離

                if(c[edg[nedg.start][i].end]==false){//如果終點不在edg_list裡面
                    tmp2.start=edg[nedg.start][i].end;
                    edg_list.push(tmp2);//儲存邊在最後面
                    c[tmp2.start]=true;//設定點tmp2.start在edg_list裡面
                }
            }
    }
    for(i=0; i<n; ++i)
        cout<<ans[i]<<' ';
    cout<<endl;//輸出從起點尋訪的最短距離
    
    return 0;
}
/*
Input:
5 7
Ax Bx 6
Ax Cx 5
Ax Dx 11
Ax Ex 16
Bx Cx -3
Cx Dx -2
Dx Ex 2
Ax
Output:
0 6 3 1 3
*/