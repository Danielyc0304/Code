#include<iostream>
using namespace std;

int main(){
    int n;//n數字
    int m=1;//運算
    int i;//i旗標

    cin>>n;

    for(; n>0; --n){
        for(i=0; i<n-1; ++i)
            cout<<'0';
        for(i=0; i<m; ++i)
            cout<<n;
        cout<<endl;

        ++m;//輸出結果
    }
    return 0;
}
/*
Input:
5
Output:
00005
00044
00333
02222
11111
*//*
Input:
2
Output:
02
11
*/