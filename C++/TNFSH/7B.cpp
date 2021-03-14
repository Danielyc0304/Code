#include<iostream>
using namespace std;

int main(){
    int n;
    long long int ans=1;
    int i;

    cin>>n;

    for(i=1; i<=n; ++i)
        ans*=i;
    cout<<ans<<endl;

    return 0;
}