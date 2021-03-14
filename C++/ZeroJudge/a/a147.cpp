#include<iostream>
using namespace std;

int main(){
    int n;
    int s;

    while(cin>>n){
        if(n==0)
            break;
        for(s=1; s<n; ++s)
            if(s%7!=0)
                cout<<s<<' ';
        cout<<endl;
    }
    return 0;
}