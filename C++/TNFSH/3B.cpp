#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    double s;

    cin>>a>>b>>c;

    s=(a+b+c)/3;

    if(s>100 || s<0)
        cout<<"BS\n";
    else if(s>=60)
        cout<<"PASS\n";
    else
        cout<<"FAIL\n";
    return 0;
}