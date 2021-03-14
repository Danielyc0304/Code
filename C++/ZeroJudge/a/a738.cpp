#include<iostream>
using namespace std;

int main(){
    int a, b;

    while(cin>>a>>b){
        while(a!=0){
            if(a<b)
                swap(a, b);
            a%=b;
        }
        cout<<b<<endl;
    }
    return 0;
}