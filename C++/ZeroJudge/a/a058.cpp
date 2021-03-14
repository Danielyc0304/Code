#include<iostream>
using namespace std;

int main(){
    int n, num;
    int c1=0, c2=0, c3=0;
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>num;

        if(num%3==0)
            ++c1;
        else if(num%3==1)
            ++c2;
        else
            ++c3;
    }
    cout<<c1<<' '<<c2<<' '<<c3<<endl;

    return 0;
}