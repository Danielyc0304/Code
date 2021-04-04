#include<iostream>
using namespace std;

int main(){
    int n;//n直線數
    int s=1;//s計算值
    int ans=1;//ans答案
    int i;//i旗標

    while(cin>>n){
        for(i=1; i<=n; ++i){
            ans+=s;
            s+=i;
        }
        cout<<ans<<endl;//輸出直線切割出的空間數

        s=1, ans=1;//初始化
    }
    return 0;
}
/*
Input:
1
2
Output:
2
4
*/