#include<iostream>
using namespace std;

int main(){
    int n;
    int i;

    cin>>n;

    for(i=1; n!=1; ++i){
        if(n%2==1)
            n=3*n+1;
        else
            n/=2;
    }
    cout<<i-1<<endl;

    return 0;
}