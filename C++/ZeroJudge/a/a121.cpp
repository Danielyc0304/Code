#include<iostream>
#include<cmath>
using namespace std;

int num[10001];
int i, j=1;

void prime(int max){
    int s=3, c=0;

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
    int a, b;
    int c1=0, c2=0;

    num[0]=2;

    while(cin>>a>>b){
        prime(b);

        if(a==1){
            if(b==1)
                c2=-1;
            ++a;
        }
        if(a==2){
            ++c2;
            ++a;
        }
        else if(a%2==0)
            ++a;
        for(; a<=b; a+=2){
            for(i=0; i<j; ++i)
                if(a%num[i]==0 && a/num[i]!=1){
                    c1=1;
                    
                    break;
                }
            if(c1==0)
                ++c2;
            c1=0;
        }
        cout<<c2<<endl;

        c2=0;
    }
    return 0;
}