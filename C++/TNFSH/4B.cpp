#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double a, b, c;
    double s;

    cin>>a>>b>>c;

    if(a>b)
        swap(a, b);
    if(a>c)
        swap(a, c);
    if(b>c)
        swap(b, c);
    if(a+b<c){
        cout<<"illegal\n"<<"unavailable\n";

        return 0;
    }
    if(a*a+b*b==c*c)
        cout<<"right\n";
    else if(a*a+b*b>c*c)
        cout<<"acute\n";
    else
        cout<<"obtuse\n";//判斷三角形
    s=(a+b+c)/2;

    cout<<fixed<<setprecision(4)<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;//輸出三角形面積

    return 0;
}
/*
Input:
3 4 5
Output:
right
6.0000
*//*
Input:
6 8 3
Output:
obtuse
7.6444
*//*
Input:
1 1 7
Output:
illegal
unavailable
*/