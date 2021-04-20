#include<iostream>
using namespace std;

int main(){//Lucky Seven
    int n;//n數字
    long long int s=7;//s計算值
    long long int ans=0;//ans答案
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        ans+=s;
        s=10*s+7;
    }
    cout<<ans<<endl;//輸出數值

    return 0;
}
/*
Input:
2
Output:
84
*//*
Input:
3
Output:
861
*/