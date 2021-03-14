#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[501];
    int n;
    int tmp;
    int i;

    cin.get(a, sizeof(a));
    cin>>n;

    for(i=0; i<strlen(a); ++i){
        tmp=(int)a[i];

        if(tmp>=97 && tmp<=122){
            if(tmp+n>122)
                tmp+=n-26;
            else
                tmp+=n;
        }
        cout<<(char)tmp;
    }
    cout<<endl;
    
    return 0;
}