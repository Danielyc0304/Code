#include<iostream>
using namespace std;

int main(){
    int n;
    long int s1=0, s2=1, tmp;
    int i;

    cin>>n;

    for(i=0; i<=n; ++i){
        cout<<s1<<' ';

        tmp=s2;
        s2+=s1;
        s1=tmp;
    }
    return 0;
}