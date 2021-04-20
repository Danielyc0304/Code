#include<iostream>
using namespace std;

int main(){//Wolfy in taxi
    int n;//n距離
    int ans;//ans答案

    cin>>n;

    if(n>10000){
        cout<<"Sleeping in school\n";

        return 0;
    }
    n-=1500;

    for(ans=70; n>0; n-=500)
        ans+=5;
    cout<<ans<<endl;//輸出價格

    return 0;
}
/*
Input:
300
Output:
70
*//*
Input:
3000
Output:
85
*//*
Input:
30000
Output:
Sleeping in school
*/