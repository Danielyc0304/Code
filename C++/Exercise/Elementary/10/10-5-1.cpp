#include<iostream>
#include<deque>
#include<cstring>
using namespace std;

#define MAX 100000//MAX最大值

deque<int> tre[MAX];//tre樹狀圖
int ans=0;//ans答案

int DFS(int node){//深度優先搜尋; node節點
    int max1, max2, dis;//max1第一遠距離; max2第二遠距離; dis距離
    int i;//i旗標

    if(tre[node].size()==0)//如果底下沒有資料
        return 0;
    if(tre[node].size()==1)//如果底下只有一筆資料
        return DFS(tre[node][0])+1;//回傳該資料的數值+1
    for(i=0; i<tre[node].size(); ++i){//底下不只一筆資料
        dis=DFS(tre[node][i])+1;//逐筆尋訪

        if(i==0)//第一筆資料
			max1=dis;
		else if(i==1){//第二筆資料
			if(dis>max1){//如果比第一筆遠
				max2=max1;
				max1=dis;
			}
			else//如果比第一筆近
				max2=dis;
		}
		else{//第三筆以上資料
			if(dis>=max1){//如果資料距離大於等於第一遠距離
				max2=max1;
				max1=dis;
			}
			else if(dis>max2)//如果小於第一遠距離，但大於第二遠距離
				max2=dis;
		}
    }
    ans=max(ans, max1+max2);//找出最大總距離與第一遠距離+第二遠距離的最大值

    return max1;//回傳第一遠距離
}
int main(){//血緣關係(10503第4題)
    int n, a, b;//n人數; a起點, b終點，建立有向圖(樹狀圖)
    bool chi[MAX]={false};//chi是否為小孩
    int rdis;//rdis從根節點的最遠距離
    int i;//i旗標

    while(scanf("%d", &n)!=EOF){
        for(i=0; i<n-1; ++i){
            scanf("%d %d", &a, &b);
            tre[a].push_back(b);//建立有向圖(樹狀圖)
            chi[b]=true;//b是小孩
        }
        for(i=0; chi[i]==true; ++i);//尋找根節點

        rdis=DFS(i);//從根節點開始尋訪
        ans=max(ans, rdis);//如果所有人都只有一個小孩時，rdis為最遠距離

        printf("%d\n", ans);//輸出最遠血緣距離

        for(i=0; i<n; ++i)
            tre[i].clear();
        memset(chi, false, sizeof(chi));
        ans=0;//初始化
    }
    return 0;
}
/*
Input:
8
0 1
0 2
0 3
7 0
1 4
1 5
3 6
Output:
4
*//*
Input:
4
0 1
0 2
2 3
Output:
3
*/