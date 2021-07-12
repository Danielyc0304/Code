#include<iostream>
using namespace std;

int main(){//區域變數與動態變數範例
    int a[100000], *b;//a區域陣列; *b位址
    b=new int(100000);//b動態陣列

    cout<<a<<endl;//輸出a的第1格的位址
    cout<<a+1<<endl;//輸出a的第2格的位址
    cout<<a+2<<endl;//輸出a的第3格的位址

    cout<<b<<endl;//輸出b的第1格的位址
    cout<<b+1<<endl;//輸出b的第2格的位址
    cout<<b+2<<endl;//輸出b的第3格的位址

    return 0;
}