#include<iostream>
using namespace std;

int main(){//費氏數列
    int n;//n項
    long long int ans[50];//ans答案
    int i;//i旗標

    ans[0]=1;
    ans[1]=1;

    for(i=2; i<50; ++i)
        ans[i]=ans[i-1]+ans[i-2];//費氏數列
    while(cin>>n)
        cout<<ans[n-1]<<endl;//輸出結果
    return 0;
}
/*
Input:
10
Output:
55
*/