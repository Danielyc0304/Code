#include<iostream>
using namespace std;

int main(){//費氏數列
    int n;//n項數
    long int s1=0, s2=1, tmp;//s1, s2計算值; tmp暫存值
    int i;//i旗標

    cin>>n;

    for(i=0; i<=n; ++i){
        cout<<s1<<' ';

        tmp=s2;
        s2+=s1;
        s1=tmp;//輸出費氏數列
    }
    return 0;
}
/*
Input:
0
Output:
0
*//*
Input:
5
Output:
0 1 1 2 3 5
*//*
Input:
3
Output:
0 1 1 2
*/