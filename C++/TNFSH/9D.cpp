#include<iostream>
using namespace std;

int main(){
    int r, m, n;
    int i, j;

    cin>>r>>m>>n;

    if(r/m==0){
        cout<<"Bumbler government is not a necessary evil. It is just evil.";

        return 0;
    }
    cout<<'S';

    for(i=0; i<r/m/(n+1); ++i){
        for(j=0; j<n; ++j)
            cout<<'T';
        cout<<'X';
    }
    if((r/m)%(n+1)!=0)
        for(i=0; i<(r/m)%(n+1); ++i)
            cout<<'T';
    return 0;
}