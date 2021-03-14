#include<iostream>
using namespace std;

int main(){
    int num[5], t;
    int s;
    int i, j;

    cin>>t;

    for(i=0; i<t; ++i){
        for(j=0; j<4; ++j)
            cin>>num[j];
        if(num[1]-num[0]==num[2]-num[1]){
            s=num[3]-num[2];
            num[4]=num[3]+s;
        }
        else{
            s=num[3]/num[2];
            num[4]=num[3]*s;
        }
        for(j=0; j<5; ++j)
            cout<<num[j]<<' ';
        cout<<endl;
    }
    return 0;
}