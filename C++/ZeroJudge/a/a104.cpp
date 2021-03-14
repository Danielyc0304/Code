#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num[1001], n;
    int i, j;

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        sort(num, num+n);
        
        for(i=0; i<n; ++i)
            cout<<num[i]<<' ';
        cout<<endl;
    }
    return 0;
}