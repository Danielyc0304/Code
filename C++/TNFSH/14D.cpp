#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, tmp;
    int ans=0;

    while(cin>>i>>j){
        cout<<i<<' '<<j<<' ';

        if(i>j)
            swap(i, j);
        for(; i<=j; ++i){
            tmp=i;

            for(n=1; tmp!=1; ++n){
                if(tmp%2==1)
                    tmp=3*tmp+1;
                else
                    tmp/=2;
            }
            ans=max(ans, n);
        }
        cout<<ans<<endl;

        ans=0;
    }
    return 0;
}