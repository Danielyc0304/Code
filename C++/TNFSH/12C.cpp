#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x, a, b;
    double ans=0;
    int i;

    cin>>x;

    for(i=1; i<=x; ++i){
        cin>>a>>b;

        ans+=b-a;

        cout<<fixed<<setprecision(2)<<"Inv("<<i<<"): "<<ans<<endl;
    }
    return 0;
}