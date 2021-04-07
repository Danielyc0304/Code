#include<iostream>
using namespace std;

int N;//N面值總數
int ans[5];//ans答案

void combination(int face[], int money, int j){//排列組合; face面值; money目標金額; j旗標
    int i;//i旗標

    if(money==0){//如果達到目標金額
        cout<<'(';

        for(i=0; i<N-1; ++i)
            cout<<ans[i]<<',';
        cout<<ans[N-1]<<')'<<endl;//輸出組合結果

        return;
    }
    if(j==N || money<0)//如果面值已用完或超過目標金額
        return;
    for(i=0; i<=money/face[j]; ++i){//每種數量都試一次
        ans[j]=i;

        combination(face, money-face[j]*i, j+1);//執行下一個面值
    }
}
int main(){
    int face[5], money;//face面值; money目標金額
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>face[i];
    cin>>money;

    combination(face, money, 0);//排列組合

    return 0;
}
/*
Input:
3
1 5 10
17
Output:
(2,1,1)
(2,3,0)
(7,0,1)
(7,2,0)
(12,1,0)
(17,0,0)
*/