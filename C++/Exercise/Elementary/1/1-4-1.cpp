#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int num[100];
    int i;
    
    memset(num, 0, sizeof(num));

    for(i=0; i<100; ++i)
        cout<<num[i]<<' ';
    return 0;
}