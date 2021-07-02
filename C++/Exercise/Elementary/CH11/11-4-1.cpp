#include<iostream>
#include<map>
#include<cstring>
using namespace std;

#define INF 0x6f6f6f6f//INF無限大

int n;//n點總數
map<string, int> tmp;//tmp暫存值
int ans[100][100];//ans答案

int num_conversion(string a){//轉換成數字; a字串
    if(tmp.find(a)==tmp.end())//如果沒有找到a
        tmp[a]=tmp.size();//建立新資料
    return tmp[a];//回傳a的value
}
void print(){
    int i, j;//i, j旗標

    for(i=0; i<n; ++i){
        for(j=0; j<n; ++j){
            if(ans[i][j]==INF)
                cout<<"INF ";
            else
                cout<<ans[i][j]<<' ';
        }
        cout<<endl;//輸出所有點到其他點的最短距離
    }
    cout<<endl;//輸出所有點到其他點的距離
}
int main(){//使用Floyd Warshall找最短路徑
    string a, b;//a起點, b終點，建立有向圖
    int m, wei;//m邊總數; wei權重
    int i, j, k;//i, j, k旗標
    
    memset(ans, 0x6f, sizeof(ans));//設定無限大

    cin>>n>>m;
    for(i=0; i<n; ++i)
        ans[i][i]=0;
    for(i=0; i<m; ++i){
        cin>>a>>b>>wei;
        ans[num_conversion(a)][num_conversion(b)]=wei;//建立有向圖
    }
    for(i=0; i<n; ++i){//i為中轉點
        for(j=0; j<n; ++j)
            for(k=0; k<n; ++k){
                if(ans[j][i]==INF || ans[i][k]==INF)//如果起點到中轉點或中轉點到終點沒有通道 
                    continue;//不執行下面程式碼
                ans[j][k]=min(ans[j][k], ans[j][i]+ans[i][k]);//找出j->k與j->i->k的最小值
            }
        print();//輸出
    }
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
Output(只顯示最後結果):
0 6 3 1 3
INF 0 -3 -5 -3
INF INF 0 -2 0
INF INF INF 0 2
INF INF INF INF 0
*/