#include<iostream>
using namespace std;

int main(){
    int n;
    int ans;

    cin>>n;

    if(n>10000){
        cout<<"Sleeping in school\n";

        return 0;
    }
    n-=1500;

    for(ans=70; n>0; n-=500)
        ans+=5;
    cout<<ans<<endl;

    return 0;
}