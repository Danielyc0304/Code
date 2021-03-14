#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, m;
    int s, sum=0;

    while(cin>>n>>m){
        sum=n;
        
        for(s=1; sum<=m; ++s)
            sum+=n+s;
        cout<<s<<endl;

        sum=0;
    }
    return 0;
}