#include<iostream>
using namespace std;

int main(){
    int n;//n數字
    int i, j;//i, j旗標

    cin>>n;

    for(i=1; i<=n; ++i){
        for(j=0; j<n-i; ++j)
            cout<<'.';
        for(j=0; j<i; ++j)
            cout<<'*';
        cout<<endl;
    }
    for(i=1; i<n; ++i){
        for(j=0; j<i; ++j)
            cout<<'.';
        for(j=0; j<n-i; ++j)
            cout<<'*';
        cout<<endl;//輸出結果
    }
    return 0;
}
/*
Input:
5
Output:
....*
...**
..***
.****
*****
.****
..***
...**
....*
*//*
Input:
2
Output:
.*
**
.*
*/