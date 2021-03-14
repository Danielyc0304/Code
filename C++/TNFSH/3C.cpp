#include<iostream>
using namespace std;

int main(){
    double a, b, c;
    double s;

    cin>>a>>b>>c;

    if(a<60)
        a*=1.25;
    if(b<60)
        b*=1.25;
    if(c<60)
        c*=1.25;
    s=(a+b+c)/3;

    if(s>=60)
        cout<<"Hmm\n";
    else
        cout<<"PleaseGoToDieOneDie\n";
    return 0;
}