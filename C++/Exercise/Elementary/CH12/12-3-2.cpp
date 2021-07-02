#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct edge{//邊
    int start;//start起點
    int end;//end終點
    double distance;//distance距離
};
int par[100];//par父節點

bool cmp(struct edge a, struct edge b){//排序規則; a, b邊
    return a.distance<b.distance;//權重小的在前面
}
int FindRoot(int node){//找出根節點; node節點
    while(node!=par[node])//當還沒找到根節點，持續執行
        node=par[node];//向上尋找
    return node;//回傳根節點
}
int main(){//連接圖形所有點的最短距離
    double x[100], y[100];//x, y座標
    int n;//n城市總數
    struct edge edg[100];//edg邊
    int Set[100], c=0, nod1, nod2;//Set節點下的資料數; c計數; nod1, nod2節點
    double ans=0;//ans答案
    int i, j, k=0;//i, j, k旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>x[i]>>y[i];
        for(i=0; i<n; ++i)
            for(j=i+1; j<n; ++j){
                edg[k].start=i;
                edg[k].end=j;
                edg[k].distance=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));//計算直線距離
                ++k;
            }
        for(i=0; i<n; ++i){
            Set[i]=1;//設定每個節點下都只有一筆資料
            par[i]=i;//設定每個節點的根節點都是自己
        }
        sort(edg, edg+k, cmp);

        for(i=0; i<k && c<n; ++i){
            nod1=FindRoot(edg[i].start);//找出起點的根節點
            nod2=FindRoot(edg[i].end);//找出終點的根節點

            if(nod1!=nod2){//如果根節點不同-->不會形成循環
                if(Set[nod1]>Set[nod2]){//如果nod1下的資料比nod2下的資料多
                    par[nod2]=nod1;//將nod2放在nod1下
                    Set[nod1]+=Set[nod2];//更新資料量
                }
                else{//如果nod1下的資料不比nod2下的資料多
                    par[nod1]=nod2;//將nod1放在nod2下
                    Set[nod2]+=Set[nod1];//更新資料量
                }
                ans+=edg[i].distance;//計算總距離
                ++c;
            }
        }
        if(c==n-1)
            cout<<ans<<endl;//輸出最短距離
        c=0, ans=0, k=0;//初始化
    }
    return 0;
}
/*
Input:
5
0.0 0.0
2.0 2.0
4.0 3.0
5.0 5.0
2.0 5.0
Output:
10.129
*/