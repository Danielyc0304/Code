#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int a, b, c;
    double s;

    cin>>a>>b>>c;
    
    s=sqrt(b*b-4*a*c);

    cout<<fixed<<setprecision(2)<<(-b+s)/(2*a)<<endl;
    cout<<fixed<<setprecision(2)<<(-b-s)/(2*a)<<endl;

    return 0;
}