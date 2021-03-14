#include<iostream>
using namespace std;

int main(){
    int num[41], N;
    int i;

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>num[i];
    for(--i; i>=0; --i)
        cout<<num[i]<<' ';
    cout<<endl;

    return 0;
}