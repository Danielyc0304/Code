#include<iostream>
#include<cmath>
using namespace std;

int num[44722], s=3;
int j=1;

void prime(int max){
    int c=0;
    int i;

    for(; s<=sqrt(max); s+=2){
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
    int x;
    int ans=0;
    int i;

    num[0]=2;
    
    while(cin>>x){
        prime(x);

        for(i=0; i<j && x!=1; ++i)
            while(x%num[i]==0){
                ans+=num[i];
                x/=num[i];
            }
        if(x!=1)
            ans+=x;
        cout<<ans<<endl;

        ans=0;
    }
    return 0;
}