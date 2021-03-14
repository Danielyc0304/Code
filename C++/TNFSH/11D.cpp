#include<iostream>
using namespace std;

int main(){
    int n, x, num;
    int c=0;
    int i, j;

    cin>>n;

    for(i=1; i<=n; ++i){
        cin>>x;

        for(j=0; j<x; ++j){
            cin>>num;

            if(num==87)
                c=1;
        }
        cout<<i<<':';

        if(c==0)
            cout<<"No\n";
        else
            cout<<"YES\n";
        c=0;
    }
    return 0;
}