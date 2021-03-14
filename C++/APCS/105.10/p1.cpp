#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[4];
    int i;

    for(i=0; i<3; ++i)
        cin>>a[i];
    sort(a, a+3);

    for(i=0; i<2; ++i)
        cout<<a[i]<<' ';
    cout<<a[2]<<endl;

    if(a[0]+a[1]<=a[2])
        cout<<"No\n";
    else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])
        cout<<"Obtuse\n";
    else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
        cout<<"Right\n";
    else if(a[0]*a[0]+a[1]*a[1]>a[2]+a[2])
        cout<<"Acute\n";
    return 0;
}