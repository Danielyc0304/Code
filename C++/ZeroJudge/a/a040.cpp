#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, m;
    int s, num, tmp, sum=0, c=0;
    int i;

    cin>>n>>m;

    for(; n<=m; ++n){
        for(s=0; n/pow(10, s)>=1; ++s);
        tmp=n;

        while(tmp!=0){
            sum+=pow(tmp%10, s);
            tmp/=10;
        }
        if(sum==n){
            cout<<n<<' ';

            c=1;
        }
        sum=0;
    }
    if(c==0)
        cout<<"none";
    cout<<endl;

    return 0;
}