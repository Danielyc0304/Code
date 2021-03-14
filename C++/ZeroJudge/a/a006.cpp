#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c;
    int ans1, ans2;

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
        cout<<"No real root\n";
    return 0;
}