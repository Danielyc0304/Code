#include<iostream>
using namespace std;

int main(){
    int a, b, N;
    int i;

    while(cin>>a>>b>>N){
        cout<<a/b<<'.';

        a%=b;

        for(; N>0; --N){
            a*=10;
            cout<<a/b;
            a%=b;
        }
        cout<<endl;
    }
    return 0;
}