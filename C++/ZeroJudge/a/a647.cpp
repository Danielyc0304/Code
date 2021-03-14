#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    double m, p;
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>m>>p;

        if(m>p)
            cout<<fixed<<setprecision(2)<<((p-m)/m)*100-0.00000001<<"% ";
        else
            cout<<fixed<<setprecision(2)<<((p-m)/m)*100+0.00000001<<"% ";
        if(((p-m)/m)*100>=10 || ((p-m)/m)*100<=-7)
            cout<<"dispose\n";
        else
            cout<<"keep\n";
    }
    return 0;
}