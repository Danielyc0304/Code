#include<iostream>
using namespace std;

int main(){
    int n, grade;
    double sum=0;
    int i;

    while(cin>>n){
        for(i=0; i<n; ++i){
            cin>>grade;
            sum+=grade;
        }
        if(sum/n>59)
            cout<<"no\n";
        else
            cout<<"yes\n";
        sum=0;
    }
    return 0;
}