#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int num[30], n, m;//num數字; n數字總數; m目標數字
bool c=false;//c判斷
int ans[30];//ans答案
int j=0;//j旗標

void DFS(int sum, int i){//深度優先搜尋; sum總和; i旗標
    int k, l;//k, l旗標

    if(sum>m || i==n){//如果總和大於目標數字或是已經跑完最後一個數字
        --j;//答案輸入退回一個

        return;
    }
    ans[j]=num[i];//答案輸入為num[i]

    if(sum==m){//如果剛好是目標數字
        for(k=0; num[i]==num[i+k]; ++k){//如果有連續相同的數字就重複輸出
            for(l=0; l<=j; ++l)
                cout<<ans[l]<<' ';
            cout<<endl;//輸出結果
        }
        c=true;
        --j;//答案輸入退回一個

        return;
    }
    ++j;//答案輸入往前一個

    DFS(sum+num[i+1], i+1);//下一項數字
    DFS(sum+num[i+1]-num[i], i+1);//減掉自己後，下一項數字
}
int main(){//求和問題
    int i;//i旗標

    cin>>n>>m;

    for(i=0; i<n; ++i)
        cin>>num[i];
    sort(num, num+n);//排序

    DFS(num[0], 0);

    if(c==false)//如果沒有輸出
        cout<<-1<<endl;
    return 0;
}
/*
Input:
10 100
10 20 40 30 50 80 60 70 5 15
Output:
5 10 15 20 50
5 10 15 30 40
5 10 15 70
5 15 20 60
5 15 30 50
5 15 80
10 20 30 40
10 20 70
10 30 60
10 40 50
20 30 50
20 80
30 70
40 60
*/