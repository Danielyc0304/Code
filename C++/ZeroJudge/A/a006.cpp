#include<iostream>
#include<cmath>
using namespace std;

int main(){//一元二次方程式
    int a, b, c;//a, b, c一元二次方程式三係數
    int ans1, ans2;//ans1, ans2答案

    cin>>a>>b>>c;

    ans1=(-b+sqrt(b*b-4*a*c))/(2*a);
    ans2=(-b-sqrt(b*b-4*a*c))/(2*a);

    if(ans1<ans2)
        swap(a, b);
    if(b*b-4*a*c>0)
        cout<<"Two different roots x1="<<ans1<<" , x2="<<ans2<<endl;
    else if(b*b-4*a*c==0)
        cout<<"Two same roots x="<<ans1<<endl;
    else
        cout<<"No real root\n";//輸出結果
    return 0;
}
/*
Input:
1 3 -10
Output:
Two different roots x1=2 , x2=-5
*//*
Input:
1 0 0
Output:
Two same roots x=0
*//*
Input:
1 1 1
Output:
No real root
*/