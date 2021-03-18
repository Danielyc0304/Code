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
    cout<<fixed<<setprecision(2)<<(-b-s)/(2*a)<<endl;//輸出一元二次方程式結果

    return 0;
}
/*
Input:
1
3
-10
Output:
2.00
-5.00
*/