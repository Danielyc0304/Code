#include<iostream>
using namespace std;

int main(){
    int x;
    int ans=0;
    int i;

    cin>>x;

    for(; x>0; --x){
        for(i=1; i<=x; ++i)
            ans+=i;
        cout<<"Sigma("<<x<<")="<<ans<<endl;

        ans=0;
    }
    return 0;
}