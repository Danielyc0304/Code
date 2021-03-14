#include<iostream>
using namespace std;

int main(){
    int x;
    int n=1;
    int i, j;

    cin>>x;

    if(x%2==0){
        cout<<"This is a Xmas tree.\n";

        return 0;
    }
    for(i=1; i<=x; ++i){
        for(j=0; j<x-i; ++j)
            cout<<' ';
        for(j=0; j<n; ++j)
            cout<<i;
        cout<<endl;

        n+=2;
    }
    for(i=1; i<x; ++i){
        for(j=0; j<x-1; ++j)
            cout<<' ';
        cout<<i<<endl;
    }
    return 0;
}