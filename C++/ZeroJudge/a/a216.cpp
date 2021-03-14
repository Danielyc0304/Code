#include<iostream>
using namespace std;

int f(int n){
    if(n==0)
        return 0;
    return n+f(n-1);
}
long int g(int n){
    if(n==0)
        return 0;
    return f(n)+g(n-1);
}
int main(){
    int n;

    while(cin>>n)
        cout<<f(n)<<' '<<g(n)<<endl;
    return 0;
}