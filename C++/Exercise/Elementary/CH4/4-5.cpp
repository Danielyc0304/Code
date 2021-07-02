#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

struct data{//資料
    int ID;//ID編號
    char word;//word字元
    int frequency;//frequency出現頻率
    bool node;//node文字節點
    int left;//left左邊
    int right;//right右邊
};
struct data a[25];//a資料
deque<struct data> tre;//tre樹狀圖
char cod[10];//cod編碼

bool cmp(struct data a, struct data b){//排序規則; a, b資料
    return a.frequency<b.frequency;//出現頻率低的在前面
}
void DFS(int node, int i){//深度優先搜尋; node節點; i旗標
    int j;//j旗標

    if(!a[node].node){//如果不是文字節點
        cod[i]='0', DFS(a[node].left, i+1);//往左尋訪
        cod[i]='1', DFS(a[node].right, i+1);//往右尋訪
    }
    else{//如果是文字節點
        cout<<a[node].word<<' ';
        for(j=0; j<i; ++j)
            cout<<cod[j];
        cout<<endl;//輸出文字與編碼
    }
}
int main(){//霍夫曼(Huffman)編碼
    struct data tmp1, tmp2, mer;//tmp1, tmp2暫存值; mer合併
    int n;//n文字總數
    int num;//num數字
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i){
            cin>>a[i].word>>a[i].frequency;

            a[i].ID=i;
            a[i].node=true;

            tre.push_back(a[i]);
        }
        sort(tre.begin(), tre.end(), cmp);//排序

        num=n;//初始化

        while(tre.size()>1){//貪婪演算法，使用次數少的文字會在樹狀圖的最下層，將編碼壓縮到最短
            tmp1=tre.front();
            tre.pop_front();
            tmp2=tre.front();
            tre.pop_front();//取出前兩筆資料

            mer.ID=num;
            mer.frequency=tmp1.frequency+tmp2.frequency;
            mer.node=false;
            mer.left=tmp1.ID;
            mer.right=tmp2.ID;
            a[num]=mer;
            tre.push_back(mer);//製作樹狀圖

            sort(tre.begin(), tre.end(), cmp);//排序

            ++num;
        }
        DFS(tre[0].ID, 0);//深度優先搜尋
    }
    return 0;
}
/*
Input:
5
a 10
b 4
c 5
d 7
e 8
Output:
d 00
e 01
b 100
c 101
a 11
*/