#include<iostream>
using namespace std;

int main(){
    int n;
    double ans=0;

    cin>>n;

    if(n>10000 || n<0){
        cout<<"Get out!!\n";

        return 0;
    }
    if(n>1000){
        cout<<"RIP!!\n";

        return 0;
    }
    if(n<120)
        ans+=2.10*n;
    else
        ans+=2.10*120;
    n-=120;

    if(n>0){
        if(n<210)
            ans+=3.02*n;
        else
            ans+=3.02*210;
        n-=210;
    }
    if(n>0){
        if(n<170)
            ans+=4.39*n;
        else
            ans+=4.39*170;
        n-=170;
    }
    if(n>0){
        if(n<200)
            ans+=4.97*n;
        else
            ans+=4.97*200;
        n-=200;
    }
    if(n>0)
        ans+=5.63*n;
    cout<<ans<<endl;

    return 0;
}