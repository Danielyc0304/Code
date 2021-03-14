#include<iostream>
using namespace std;

int main(){
    int T, num;
    int ans=1;
    int i;

    cin>>T;

    for(i=0; i<T; ++i){
        cin>>num;

        if(num==0)
            ans*=num;
        while(num!=0){
            ans*=num%10;
            num/=10;
        }
        cout<<ans<<endl;

        ans=1;
    }
    return 0;
}