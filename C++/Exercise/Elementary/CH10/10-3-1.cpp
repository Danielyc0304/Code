#include<iostream>
#include<map>
#include<deque>
#include<cstring>
using namespace std;

map<string, int> tmp1;//nod節點
deque<int> edg[200];//edg邊
bool c[200]={false};//c判斷
int ans=0;//ans答案

int num_conversion(string a){//轉換成數字; a字串
    if(tmp1.find(a)==tmp1.end())//如果沒有找到a
        tmp1[a]=tmp1.size();//建立新資料
    return tmp1[a];//回傳a的value
}
void DFS(int node, int sum){//深度優先搜尋; node節點; sum長度總和
    int end;//end遍歷終點
    int i;//i旗標

    for(i=0; i<edg[node].size(); ++i){
        if(sum>ans)
            ans=sum;
        end=edg[node][i];

        if(c[end]==true)//如果終點已經被拜訪過
            continue;//不執行下面程式碼
        c[end]=true;//紀錄為被拜訪過

        DFS(end, sum+1);
    }
}
int main(){//使用DFS求最長路徑長度
    string a, b, sta;//a, b節點，建立無向圖; sta遍歷起點
    int n, m;//n點總數; m邊總數
    int i;//i旗標

    while(cin>>n>>m){
        for(i=0; i<m; ++i){
            cin>>a>>b;
            edg[num_conversion(a)].push_back(num_conversion(b));
            edg[num_conversion(b)].push_back(num_conversion(a));//建立無向圖
        }
        cin>>sta;
        c[num_conversion(sta)]=1;

        DFS(num_conversion(sta), 0);//深度優先搜尋

        cout<<ans<<endl;//輸出最長路徑長度

        for(i=0; i<n; ++i)
            edg[i].clear();
        tmp1.clear();
        memset(c, false, sizeof(c));
        ans=0;//初始化
    }
    return 0;
}
/*
Input:
5
4
ax bx
bx cx
dx cx
cx ex
ax
Output:
3
*/