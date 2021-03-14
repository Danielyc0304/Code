#include<iostream>
using namespace std;

int main(){
    int x, num;
    int c=0;
    int i;

    cin>>x;

    for(i=0; i<x; ++i){
        cin>>num;

        if(num==87)
            c=1;
    }
    if(c==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}