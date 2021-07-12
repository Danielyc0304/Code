#include<iostream>
#include<algorithm>
using namespace std;

int num[100], n, m;//num數字; n數字總數; m取用數
int ans[100];//ans答案

void DFS(int node, int i){//深度優先搜尋; node節點; i旗標
    int j;//j旗標

    if(i==m){//如果到取用數
        for(j=0; j<m; ++j)
            cout<<num[ans[j]]<<' ';
        cout<<endl;//輸出排列組合

        return;
    }
    for(j=node; j<n; ++j){//從小排到大
        ans[i]=j;

        DFS(j+1, i+1);
    }
}
int main(){//樂透包牌
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        cin>>m;

        sort(num, num+n);//排序

        DFS(0, 0);//深度優先搜尋
    }
    return 0;
}
/*
Input:
6 23 41 34 5 17 22 5
Output:
5 17 22 23 34
5 17 22 23 41
5 17 22 34 41
5 17 23 34 41
5 17 23 34 41
17 22 23 34 41
*/