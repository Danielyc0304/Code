#include<iostream>
#include<cstring>
using namespace std;

int main(){//memcmp範例
    char a[11]="I love C++";//a字串
    char b[12]="I love Java";//b字串

    if(memcmp(a, b, sizeof(a))!=0)//比較a與b字串
        cout<<a<<"大於"<<b<<endl;
    else
        cout<<a<<"小於"<<b<<endl;
    return 0;
}