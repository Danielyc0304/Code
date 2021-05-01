#include<iostream>
using namespace std;

int main(){//MOD3
    int n, num;//n數字總數; num數字
    int ans[3]={0};//ans答案
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>num;

        ++ans[num%3];
    }
    cout<<ans[0]<<' '<<ans[1]<<' '<<ans[2]<<endl;//判斷、輸出結果

    return 0;
}
/*
Input:
5
1
2
3
4
5
Output:
1 2 2
*/