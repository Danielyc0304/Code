#include<iostream>
using namespace std;

int main(){
    int x, y;
    long int ans=0;

    cin>>x>>y;

    if(x>y)
        swap(x, y);
    for(; x<=y; ++x)
        ans+=x;
    cout<<ans<<endl;

    return 0;
}