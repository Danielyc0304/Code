#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int num[9];
    int i;

    while(cin>>n){
        for(i=0; i<n; ++i){
            num[i]=n-i;
            cout<<num[i];
        }
        cout<<endl;

        while(prev_permutation(num, num+n)==1){
            for(i=0; i<n; ++i)
                cout<<num[i];
            cout<<endl;
        }
    }
    return 0;
}