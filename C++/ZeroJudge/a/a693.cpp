#include<iostream>
using namespace std;

int main(){
    int num[100001], n, m, l, r;
    int sum[100001];
    int i;

    while(cin>>n>>m){
        for(i=1; i<=n; ++i){
            cin>>num[i];
            
            sum[i]=sum[i-1]+num[i];
        }
        for(i=0; i<m; ++i){
            cin>>l>>r;
            cout<<sum[r]-sum[l-1]<<endl;
        }
    }
    return 0;
}