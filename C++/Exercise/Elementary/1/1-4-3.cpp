#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[11]="I love C++";
    char b[12]="I love Java";

    if(memcmp(a, b, sizeof(a))>0)
        cout<<a<<"大於"<<b<<endl;
    else
        cout<<a<<"小於"<<b<<endl;
    return 0;
}