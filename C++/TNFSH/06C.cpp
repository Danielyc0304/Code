#include<iostream>
using namespace std;

int main(){
    int n;//n數字
    int i;//i旗標

    cin>>n;

    for(i=2; i<=n/2; ++i)
        if(n%i==0)
            cout<<i<<endl;//輸出因數
    return 0;
}
/*
Input:
64
Output:
2
4
8
16
32
*//*
Input:
24
Output:
2
3
4
6
8
12
*/