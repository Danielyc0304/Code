#include<iostream>
using namespace std;

int main(){
    double a, b, c;
    double s;

    cin>>a>>b>>c;

    if((a>100 || a<0) || (b>100 || b<0) || (c>100 || c<0)){
        cout<<"ReCheckScores\n";

        return 0;
    }
    if(a<60)
        a*=1.25;
    if(a<60)
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