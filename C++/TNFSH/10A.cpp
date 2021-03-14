#include<iostream>
using namespace std;

int main(){
    int n;
    int m=1;
    int i;

    cin>>n;

    for(; n>0; --n){
        for(i=0; i<m; ++i)
            cout<<n;
        cout<<endl;

        ++m;
    }
    return 0;
}