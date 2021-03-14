#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n, a, b, c;
    double grade[101];
    int i;

    cin>>n;

    for(i=1; i<=n; ++i){
        cin>>a>>b>>c;

        grade[i]=a+b+c;
    }
    for(; n>0; --n)
        cout<<fixed<<setprecision(2)<<n<<": "<<grade[n]/3<<endl;
    return 0;
}