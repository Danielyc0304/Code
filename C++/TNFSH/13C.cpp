#include<iostream>
using namespace std;

int main(){
    int m;
    int s=0, n;

    cin>>m;

    for(n=1; s<m; ++n)
        s+=n;
    cout<<n-1<<endl;

    return 0;
}