#include<iostream>
#include<cmath>
using namespace std;

int num[1001];
int j=1;

void prime(int max){
    int s, c=0;
    int i;

    num[0]=2;

    for(s=3; s<=sqrt(max); s+=2){
        for(i=0; i<j; ++i)
            if(s%num[i]==0){
                c=1;

                break;
            }
        if(c==0){
            num[j]=s;
            ++j;
        }
        c=0;
    }
}
int main(){
    int a;
    int c=0;
    int i;
    
    cin>>a;

    prime(a);

    for(i=0; i<j && a!=1; ++i){
        for(c=0; a%num[i]==0; ++c)
            a/=num[i];
        if(c!=0)
            cout<<num[i];
        if(c>1)
            cout<<'^'<<c;
        if(a!=1 && c!=0)
            cout<<" * ";
    }
    if(a!=1)
        cout<<a;
    cout<<endl;

    return 0;
}