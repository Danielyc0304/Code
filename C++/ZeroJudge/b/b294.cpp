#include<iostream>
using namespace std;

int main(){
    int n, num;//n天數; num買的數量
    int ans=0;//ans答案
    int i;//i旗標

    cin>>n;

    for(i=1; i<=n; ++i){
        cin>>num;

        ans+=num*i;//第n天一個n元
    }
    cout<<ans<<endl;//輸出價錢

    return 0;
}
/*
Input:
5
1 2 3 4 5
Output:
55
*/