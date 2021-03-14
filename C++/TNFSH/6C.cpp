#include<iostream>
using namespace std;

int main(){
    int n;
    int i;

    cin>>n;

    for(i=2; i<=n/2; ++i)
        if(n%i==0)
            cout<<i<<endl;
    return 0;
}