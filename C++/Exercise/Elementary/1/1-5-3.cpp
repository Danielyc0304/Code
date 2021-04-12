#include<iostream>
using namespace std;

int main(){//區域變數與動態變數範例
    int a[100000], *b;
    b=new int(100000);

    cout<<a<<endl;
    cout<<a+1<<endl;
    cout<<a+2<<endl;

    cout<<b<<endl;
    cout<<b+1<<endl;
    cout<<b+2<<endl;

    return 0;
}