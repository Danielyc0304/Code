#include<iostream>
using namespace std;

int main(){
    int x;//x數字
    int ans=0;//ans答案
    int i;//i旗標

    cin>>x;

    for(; x>0; --x){
        for(i=1; i<=x; ++i)
            ans+=i;
        cout<<"Sigma("<<x<<")="<<ans<<endl;//輸出累加

        ans=0;//初始化
    }
    return 0;
}
/*
Input:
3
Output:
Sigma(3)=6
Sigma(2)=3
Sigma(1)=1
*//*
Input:
5
Output:
Sigma(5)=15
Sigma(4)=10
Sigma(3)=6
Sigma(2)=3
Sigma(1)=1
*//*
Input:
1
Output:
Sigma(1)=1
*/