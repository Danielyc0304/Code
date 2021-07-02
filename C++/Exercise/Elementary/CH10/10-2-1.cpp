#include<iostream>
#include<cstring>
using namespace std;

int main(){//使用陣列建立圖形資料結構
    int edg[100][100]={0}, n, a, b;//edg邊; n邊總數; a, b節點，建立無向圖
    int i;//i旗標

    cin>>n;
    for(i=0; i<n; ++i){
        cin>>a>>b;

        edg[a][b]=1;
        edg[b][a]=1;//建立無向圖
    }
    return 0;
}