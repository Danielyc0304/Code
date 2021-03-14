#include<iostream>
using namespace std;

int main(){
    int N;
    int ans=0;

    cin>>N;

    if(N>40){
        cout<<100<<endl;

        return 0;
    }
    if(N<10)
        ans+=6*N;
    else
        ans+=60;
    N-=10;

    if(N>0){
        if(N<10)
            ans+=2*N;
        else
            ans+=20;
        N-=10;
    }
    if(N>0)
        ans+=N;
    cout<<ans<<endl;

    return 0;
}