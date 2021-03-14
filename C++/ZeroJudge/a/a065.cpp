#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
    char a[8];
    int i;

    while(cin>>a){
        for(i=0; i<strlen(a)-1; ++i)
            cout<<abs((int)a[i]-(int)a[i+1]);
        cout<<endl;
    }
    return 0;
}