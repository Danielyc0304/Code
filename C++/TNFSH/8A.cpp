#include<iostream>
using namespace std;

int main(){
    int n;
    int c=0;
    int i;

    cin>>n;

    for(i=2; i<n; ++i)
        if(n%i==0){
            cout<<i<<endl;

            c=1;
        }
    if(c==0)
        cout<<"prime\n";
    return 0;
}