#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b, c, d, e, f;
    double num1, num2, num3;

    cin>>a>>b>>c>>d>>e>>f;

    num1=a*e-b*d;
    num2=c*e-b*f;
    num3=a*f-c*d;

    if(num1!=0){
        cout<<"x="<<fixed<<setprecision(2)<<num2/num1<<endl;
        cout<<"y="<<fixed<<setprecision(2)<<num3/num1<<endl;
    }
    else{
        if(num2!=0 || num3!=0)
            cout<<"No answer\n";
        else
            cout<<"Too many\n";
    }
    return 0;
}