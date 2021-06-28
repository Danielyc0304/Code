#include<iostream>
#include<deque>
using namespace std;

int main(){//使用deque建立圖形資料結構
    deque<int> edg[100];//edg邊
    int n, a, b;//n邊總數; a, b節點，建立無向圖
    int i;//i旗標

    cin>>n;
    for(i=0; i<n; ++i){
        cin>>a>>b;
        edg[a].push_back(b);
        edg[b].push_back(a);//建立無向圖
    }
    return 0;
}