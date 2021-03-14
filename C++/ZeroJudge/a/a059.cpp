#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T, a, b;
    int sum=0;
    int i;

    cin>>T;

    for(i=1; i<=T; ++i){
        cin>>a>>b;

        for(; a<=b; ++a)
            if(sqrt(a)-(int)sqrt(a)==0)
                sum+=a;
        cout<<"Case "<<i<<": "<<sum<<endl;

        sum=0;
    }
    return 0;
}