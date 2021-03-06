#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){//三角形判斷
    double a, b, c;//a, b, c三角形三邊長
    double s;//s計算值

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
    if(a*a+b*b==c*c)//如果為直角三角形
        cout<<"right\n";
    else if(a*a+b*b>c*c)//如果為銳角三角形
        cout<<"acute\n";
    else//如果為鈍角三角形
        cout<<"obtuse\n";//判斷、輸出三角形
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