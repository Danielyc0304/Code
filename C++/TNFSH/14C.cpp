#include<iostream>
using namespace std;

int main(){//3n+1 problem 簡易版 (改編自ACM100)
    int n;//n數字
    int i;//i旗標

    cin>>n;

    for(i=1; n!=1; ++i){
        if(n%2==1)
            n=3*n+1;
        else
            n/=2;
    }
    cout<<i-1<<endl;//輸出次數

    return 0;
}
/*
Input:
22
Output:
16
*/