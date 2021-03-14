#include<iostream>
using namespace std;

int main(){
    int X0, X1, X2, X3;

    cin>>X0>>X1>>X2>>X3;

    if(X0>X2){
        swap(X0, X2);
        swap(X1, X3);
    }
    if(X1<X2)
        cout<<"no\n";
    else
        cout<<"yes\n";
    return 0;
}