#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n, grade;
    double ans=0;
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>grade;

        ans+=grade;
    }
    cout<<fixed<<setprecision(2)<<ans/n<<endl;

    return 0;
}