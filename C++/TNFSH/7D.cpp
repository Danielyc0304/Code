#include<iostream>
using namespace std;

int main(){
    int n;
    long long int s=7;
    long long int ans=0;
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        ans+=s;
        s=10*s+7;
    }
    cout<<ans<<endl;

    return 0;
}