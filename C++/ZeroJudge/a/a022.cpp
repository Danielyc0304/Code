#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1000];
    int c=0;
    int i;

    while(cin.get(a, sizeof(a))){
        for(i=0; i<strlen(a)-i; ++i)
            if(a[i]!=a[strlen(a)-i-1]){
                c=1;

                break;
            }
        if(c==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}