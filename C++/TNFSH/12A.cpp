#include<iostream>
using namespace std;

int main(){
    int X;
    int n;
    int i, j;

    cin>>X;

    n=X;

    for(i=0; i<X; ++i){
        for(j=0; j<i; ++j)
            cout<<' ';
        for(j=0; j<2*n-1; ++j)
            cout<<'*';
        cout<<endl;

        --n;
    }
    n=2;

    for(i-=2; i>=0; --i){
        for(j=0; j<i; ++j)
            cout<<' ';
        for(j=0; j<2*n-1; ++j)
            cout<<'*';
        cout<<endl;

        ++n;
    }
    return 0;
}