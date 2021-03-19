#include<iostream>
using namespace std;

int main(){
    long long int N;//N數字
    int ans=0;//ans答案

    cin>>N;

    while(N!=0){
        ans+=N%10;
        N/=10;
    }
    cout<<ans<<endl;//輸出位數和

    return 0;
}
/*
Input:
12345
Output:
15
*//*
Input:
2997
Output:
27
*/