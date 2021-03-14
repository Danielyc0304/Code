#include<iostream>
using namespace std;

int main(){
    int p, q, r;

    cin>>p>>q>>r;

    if(p>r)
        swap(p, r);
    if(q>r)
        swap(q, r);
    if(p>q)
        swap(p, q);
    if(p+q>r)
        cout<<"yes\n";
    else
        cout<<"no\n";
    return 0;
}