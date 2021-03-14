#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    int ans;
    int i;

    cin>>a>>b>>c;

    for(i=1; ans!=c; ++i){
        ans=(a+b)/2;

        cout<<i<<": "<<ans<<endl;

        if(ans>c)
            b=ans-1;
        else
            a=ans+1;
    }
    return 0;
}