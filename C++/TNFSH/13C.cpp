#include<iostream>
using namespace std;

int main(){
    int m;//m數字
    int s=0;//s計算值
    int ans;//ans答案

    cin>>m;

    for(ans=1; s<m; ++ans)
        s+=ans;
    cout<<ans-1<<endl;//輸出數字

    return 0;
}
/*
Input:
6
Output:
3
*//*
Input:
56
Output:
11
*/