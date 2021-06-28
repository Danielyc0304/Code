#include<iostream>
#include<deque>
using namespace std;

deque<int> edg[26];//edg邊
bool c1[26]={false}, c2=false;//c1, c2判斷

void DFS(int node, int start){//深度優先搜尋; node節點; start遍歷起點
    int end;//end遍歷終點
    int i;//i旗標

    if(c2)//如果已經找到循環
        return;
    for(i=0; i<edg[node].size(); ++i){
        end=edg[node][i];

        if(end==start){//如果回到遍歷起點
            c2=true;

            return;
        }
        if(c1[end]==true)//如果終點已經被拜訪過
            continue;//不執行下面程式碼
        c1[end]=true;//紀錄為被拜訪過

        DFS(end, start);

        c1[end]=false;//初始化
    }
}
int main(){//用DFS偵測是否有迴圈
    char a, b;//a起點, b終點，建立有向圖
    int n;//邊總數n
    int tmp1, tmp2;//tmp1, tmp2暫存值
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i){
            cin>>a>>b;
            tmp1=a-'A';
            tmp2=b-'A';
            edg[tmp1].push_back(tmp2);//建立有向圖
        }
        for(i=0; i<n; ++i){
            if(edg[i].size()>0)
                DFS(i, i);
            if(c2)//如果已經找到循環
                break;
        }
        if(c2)
            cout<<"形成循環\n";
        else
            cout<<"沒有形成循環\n";//輸出是否有循環
        for(i=0; i<n; ++i)
            edg[i].clear();
        c2=false;//初始化
    }
    return 0;
}
/*
Input:
3
A D
D B
B C
4
A B
B C
C B
D F
Output:
沒有形成循環
形成循環
*/