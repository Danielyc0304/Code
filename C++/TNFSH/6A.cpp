#include<iostream>
using namespace std;

int main(){
    int n, s;
    int i;

    cin>>n>>s;

    if(n>45 || n<=0){
        cout<<"Error";

        return 0;
    }
    for(i=1; i<=n; ++i)
        cout<<i<<": "<<s+i<<endl;
    return 0;
}