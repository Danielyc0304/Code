#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b, c, d, e, f;//a, b, c二元一次方程式第一條係數; d, e, f二元一次方程式第二條係數
    double num1, num2, num3;//num1, num2, num3數字

    cin>>a>>b>>c>>d>>e>>f;

    num1=a*e-b*d;
    num2=c*e-b*f;
    num3=a*f-c*d;//用行列式解

    if(num1!=0){
        cout<<"x="<<fixed<<setprecision(2)<<num2/num1<<endl;
        cout<<"y="<<fixed<<setprecision(2)<<num3/num1<<endl;
    }
    else{
        if(num2!=0 || num3!=0)
            cout<<"No answer\n";
        else
            cout<<"Too many\n";//輸出結果
    }
    return 0;
}
/*
Input:
1 1 2 1 -1 0
Output:
x=1.00
y=1.00
*/