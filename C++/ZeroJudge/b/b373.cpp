#include<iostream>
using namespace std;

int main(){
    int num[10001], N;
    int ans=0;
    int i, j;

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>num[i];
    for(i=0; i<N-1; ++i)
        for(j=0; j<N-i-1; ++j)
            if(num[j]>num[j+1]){
                swap(num[j], num[j+1]);
                ++ans;
            }
    cout<<ans<<endl;

    return 0;
}