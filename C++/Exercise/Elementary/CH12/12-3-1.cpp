#include<iostream>
#include<algorithm>
using namespace std;

struct edge{//邊
    int start;//start起點
    int end;//end終點
    int weights;//weights權重
};
int par[100];//par父節點

bool cmp(struct edge a, struct edge b){//排序規則; a, b邊
    return a.weights<b.weights;//權重小的在前面
}
int FindRoot(int node){//找出根節點; node節點
    while(node!=par[node])//當還沒找到根節點，持續執行
        node=par[node];//向上尋找
    return node;//回傳根節點
}
int main(){//最小生成樹
    struct edge edg[100];//edg邊
    int n, m;//n點總數; m邊總數
    int Set[100], c=0, nod1, nod2;//Set節點下的資料數, c計數; nod1, nod2節點
    int ans=0;//ans答案
    int i;//i旗標

    while(cin>>n>>m){
        for(i=0; i<m; ++i)
            cin>>edg[i].start>>edg[i].end>>edg[i].weights;
        for(i=0; i<n; ++i){
            Set[i]=1;//設定每個節點下都只有一筆資料
            par[i]=i;//設定每個節點的根節點都是自己
        }
        sort(edg, edg+m, cmp);
        
        for(i=0; i<m && c<n; ++i){
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
                ans+=edg[i].weights;//計算總權重
                ++c;
            }
        }
        if(c==n-1)//如果可以連接所有點
            cout<<ans<<endl;
        else
            cout<<"找不到最小生成樹\n";//輸出結果
        c=0, ans=0;//初始化
    }
    return 0;
}
/*
Input:
6 9
0 1 6
0 2 5
0 3 11
0 4 16
1 2 3
2 3 7
2 5 10
3 4 9
3 5 2
Output:
26
*/