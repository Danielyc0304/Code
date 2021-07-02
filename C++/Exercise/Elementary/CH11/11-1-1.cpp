#include<iostream>
using namespace std;

int main(){//使用陣列建立邊帶有權重的圖形資料結構
    int n, a, b, wei;//n邊總數; a, b節點，建立無向圖; wei權重
    int edg[100][100];//edg邊
    int i;//i旗標

    cin>>n;
    for(i=0; i<n; ++i){
        cin>>a>>b>>wei;
        edg[a][b]=wei;
        edg[b][a]=wei;//建立無向圖
    }
    return 0;
}