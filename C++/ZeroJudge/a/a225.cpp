#include<iostream>
using namespace std;

int main(){
    int num[1001], n;
    int i, j;

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        for(i=0; i<n; ++i)
            for(j=i; j<n; ++j)
                if(num[i]%10>num[j]%10)
                    swap(num[i], num[j]);
        for(i=0; i<n; ++i)
            for(j=i; j<n && num[i]%10==num[j]%10; ++j)
                if(num[i]/10<num[j]/10)
                    swap(num[i], num[j]);
        for(i=0; i<n; ++i)
            cout<<num[i]<<' ';
        cout<<endl;
    }
    return 0;
}