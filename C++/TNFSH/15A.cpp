#include<iostream>
using namespace std;

int main(){
    int num[41], N;//num[41]數字, N總數
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>num[i];
    for(--i; i>=0; --i)
        cout<<num[i]<<' ';
    cout<<endl;//反序輸出

    return 0;
}
/*
Input:
10
42 71 63 73 1 52 8 40 38 88
Output:
88 38 40 8 52 1 73 63 71 42
*/