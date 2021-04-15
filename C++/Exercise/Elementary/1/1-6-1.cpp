#include<iostream>
using namespace std;

int main(){//位元運算範例
    int a=0b01001101;//a二進制數字
    int b=0b00100110;//b二進制數字

    cout<<"a="<<hex<<a<<endl;//輸出十六進制的a
    cout<<"b="<<hex<<b<<endl;//輸出十六進制的b
    cout<<"a&b="<<hex<<(a&b)<<endl;//輸出a與b的&(且)運算結果，以十六進制表示
    cout<<"a|b="<<hex<<(a|b)<<endl;//輸出a與b的|(或)運算結果，以十六進制表示
    cout<<"a^b="<<hex<<(a^b)<<endl;//輸出a與b的^(互斥或)運算結果，以十六進制表示
    cout<<"~a="<<hex<<(~a)<<endl;//輸出a與b的~(補數)運算結果，以十六進制表示
    cout<<"(a<<1)="<<hex<<(a<<1)<<endl;//輸出a與b的<<1(左移1個位元，相當於*2)運算結果，以十六進制表示
    cout<<"(a>>1)="<<hex<<(a>>1)<<endl;//輸出a與b的>>1(右移1個位元，相當於/2)運算結果，以十六進制表示
    
    return 0;
}