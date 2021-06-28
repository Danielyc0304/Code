#include<iostream>
#include<deque>
#include<cstring>
using namespace std;

#define MAX 100000//MAX最大值

int main(){//樹狀圖分析(10610第3題)
    int n, k, num;//n節點總數; k子節點總數; num子節點
    deque<int> lea;//lea葉節點
    int dep[MAX], chi[MAX]={0}, par[MAX]={0}, nod;//dep節點深度; chi子節點個數; par父節點; nod節點
    int ans=0;//ans答案
    int i, j;//i, j旗標

    memset(dep, -1, sizeof(dep));

    while(scanf("%d", &n)!=EOF){
        for(i=1; i<=n; ++i){
            scanf("%d", &k);

            if(k==0){//如果沒有子節點
                lea.push_back(i);//i為葉節點

                dep[i]=0;//深度為0
            }
            else{
                chi[i]=k;//子節點數為k

                for(j=0; j<k; ++j){
                    scanf("%d", &num);
                    par[num]=i;//num的父節點為i
                }
            }
        }
        while(!lea.empty()){
            nod=lea.front();//讀取葉節點
            lea.pop_front();

            dep[par[nod]]=max(dep[par[nod]], dep[nod]+1);//nod的父節點的深度為原父節點深度與節點深度+1的最大值
            --chi[par[nod]];//子節點數-1

            if(chi[par[nod]]==0)//如果變葉節點
                lea.push_back(par[nod]);
        }
        for(i=1; i<=n; ++i)
            ans+=dep[i];
        cout<<nod<<endl<<ans<<endl;//輸出根節點與節點高度總和

        memset(dep, -1, sizeof(dep)), memset(chi, 0, sizeof(chi)), memset(par, 0, sizeof(par));
        ans=0;//初始化
    }
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