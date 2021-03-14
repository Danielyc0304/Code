#include<iostream>
using namespace std;

int main(){
    int n, m;

    cin>>n>>m;

    if(n>m)
        swap(n, m);
    for(; n<=m; ++n)
        cout<<n<<"C="<<(double)9/5*n+32<<"F"<<endl;
    return 0;
}