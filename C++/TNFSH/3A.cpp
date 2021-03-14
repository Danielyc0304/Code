#include<iostream>
using namespace std;

int main(){
    int n;

    cin>>n;

    if(n<0)
        cout<<"M\n";
    else{
        if(n==0)
            cout<<"Z\n";
        else if(n%2==1)
            cout<<"O\n";
        else
            cout<<"E\n";
    }
    return 0;
}