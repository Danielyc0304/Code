#include<iostream>
using namespace std;

int main(){
    int n;
    int s=1, sum=1;
    int i;

    while(cin>>n){
        for(i=1; i<=n; ++i){
            sum+=s;
            s+=i;
        }
        cout<<sum<<endl;

        s=1, sum=1;
    }
    return 0;
}