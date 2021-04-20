#include<iostream>
using namespace std;

int main(){//很大很大的N!
    int n;//n結束數字
    long long int ans=1;//ans答案
    int i;//i旗標

    cin>>n;

    for(i=1; i<=n; ++i)
        ans*=i;
    cout<<ans<<endl;//輸出階乘

    return 0;
}
/*
Input:
5
Output:
120
*//*
Input:
18
Output:
6402373705728000
*/