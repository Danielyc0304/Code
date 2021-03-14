#include<iostream>
using namespace std;

int main(){
    int n, num;
    int ans=0;
    int i;

    cin>>n;

    for(i=1; i<=n; ++i){
        cin>>num;

        ans+=num*i;
    }
    cout<<ans<<endl;

    return 0;
}