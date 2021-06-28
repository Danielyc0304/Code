#include<iostream>
#include<deque>
using namespace std;

struct edge{//edge邊
    int start;//start起點
    int end;//end終點
    int weights;//weights權重
};
int main(){//使用deque建立邊帶有權重的圖形資料結構
    deque<struct edge> edg[100];//edg邊
    struct edge tmp;//tmp暫存值
    int n, a, b;//n邊總數; a, b節點，建立雙向圖
    int i;//i旗標
    
    cin>>n;
    for(i=0; i<n; ++i){
        cin>>a>>b>>tmp.weights;

        tmp.start=a;
        tmp.end=b;
        edg[a].push_back(tmp);

        tmp.start=b;
        tmp.end=a;
        edg[b].push_back(tmp);//建立雙向圖
    }
    return 0;
}