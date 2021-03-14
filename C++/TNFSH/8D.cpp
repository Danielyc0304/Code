#include<iostream>
using namespace std;

int main(){
    int n, num;
    int c=0;
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>num;

        if(num%2==0)
            c=1;
    }
    if(c==0)
        cout<<"Very Good!!!\n";
    else
        cout<<"Oh, No!!!\n";
    return 0;
}