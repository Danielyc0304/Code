#include<iostream>
using namespace std;

int main(){
    int n;
    int ans=0;
    int i;

    cin>>n;

    for(i=2; i<n; ++i)
        if(n%i==0)
            ans+=i;
    cout<<ans<<endl;

    return 0;
}