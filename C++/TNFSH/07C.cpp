#include<iostream>
using namespace std;

int main(){
    int n;//n數字
    int ans=0;//ans答案
    int i;//i旗標

    cin>>n;

    for(i=2; i<n; ++i)
        if(n%i==0)
            ans+=i;
    cout<<ans<<endl;//輸出因數和

    return 0;
}
/*
Input:
32
Output:
30
*//*
Input:
24
Output:
35
*/