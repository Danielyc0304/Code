#include<iostream>
using namespace std;

int main(){
    int num[20][20], N, M;//num數字; N行數; M每行個數
    int mnum[20]={0}, c=0;//mnum每行的最大數字
    int ans=0;//ans答案
    int i, j;//i, j旗標

    cin>>N>>M;

    for(i=0; i<N; ++i){
        for(j=0; j<M; ++j){
            cin>>num[i][j];

            if(num[i][j]>mnum[i])
                mnum[i]=num[i][j];//存到第i行的最大數字
        }
        ans+=mnum[i];//計算最大數字的總和
    }
    cout<<ans<<endl;//輸出總和

    for(i=0; i<N-1; ++i)
        if(ans%mnum[i]==0){
            cout<<mnum[i]<<' ';

            c=1;
        }
    if(ans%mnum[i]==0){
        cout<<mnum[i];//輸出可以整除最大數字總和的最大數字

        c=1;
    }
    if(c==0)//如果皆不能整除
        cout<<-1<<endl;
    return 0;
}
/*
Input:
3 2
1 5
6 4
1 1
Output:
12
6 1
*//*
Input:
4 3
6 3 2
2 7 9
4 7 1
9 5 3
Output:
31
-1
*/