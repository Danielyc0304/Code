#include<iostream>
using namespace std;

int main(){
    int a, b;
    int i, j;

    cin>>a>>b;

    for(i=0; i<a; ++i){
        if(i%2==0)
            for(j=0; j<b; ++j)
                cout<<'*';
        else{
            for(j=0; j<b/2; ++j)
                cout<<"*0";
            if(b%2==1)
                cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}