#include<iostream>
using namespace std;

int main(){
    int num[100000], n, m, l, r;//num數字; n數字總數; m吃的總數; l, r吃的範圍
    int sum[100000]={0};//sum總和
    int i;//i旗標

    while(cin>>n>>m){
        for(i=1; i<=n; ++i){
            cin>>num[i];
            
            sum[i]=sum[i-1]+num[i];//sum[n]=num[1]加到num[n]
        }
        for(i=0; i<m; ++i){
            cin>>l>>r;
            cout<<sum[r]-sum[l-1]<<endl;//輸出結果
        }
    }
    return 0;
}
/*
Input:
3 3
1 2 3
1 3
1 2
2 3
Output:
6
3
5
*/