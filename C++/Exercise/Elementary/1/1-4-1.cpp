#include<iostream>
#include<cstring>
using namespace std;

int main(){//memset範例
    int num[100];//num數字
    int i;//i旗標
    
    memset(num, 0, sizeof(num));//初始化num為0

    for(i=0; i<100; ++i)
        cout<<num[i]<<' ';
    return 0;
}