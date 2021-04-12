#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> tree;//tree樹狀圖

int DFS(int node){//深度優先搜尋; node節點
    int hei=0;//hei高度
    int i;//i旗標

    if(tree[node].size()==0)//如果節點下面沒有資料
        return 0;//回傳0
    for(i=0; i<tree[node].size(); ++i)//遍歷節點下的資料
        hei=max(hei, DFS(tree[node][i])+1);//找出最高的高度
    return hei;//回傳高度
}
int main(){
    vector<int> tmp;//tmp暫存值
    int n, k, num;//n節點總數; k節點下的資料總數; num數字
    int child[100000]={0};//child是否為子節點
    int ans=0;//ans答案
    int i, j;//i, j旗標

    cin>>n;
    tree.push_back(tmp);

    for(i=0; i<n; ++i){
        cin>>k;

        for(j=0; j<k; ++j){
            cin>>num;
            tmp.push_back(num);

            child[num]=1;
        }
        tree.push_back(tmp);
        tmp.clear();
    }
    for(i=1; i<=n; ++i){
        ans+=DFS(i);//計算高度

        if(child[i]==0)//如果不是子節點
            cout<<i<<endl;
    }
    cout<<ans<<endl;//輸出高度總和

    return 0;
}
/*
Input:
7
0
2 6 7
2 1 4
0
2 3 2
0
0
Output:
5
4
*//*
Input:
9
1 6
3 5 3 8
0
2 1 7
1 9
0
1 2
0
0
Output:
4
11
*/