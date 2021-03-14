#include<iostream>
using namespace std;

int main(){
    int a;
    int ans=0;
    int i;

    for(i=1; ans<70000; ++i){
        cin>>a;

        ans+=a;
    }
    cout<<i-1<<endl<<ans<<endl;

    return 0;
}