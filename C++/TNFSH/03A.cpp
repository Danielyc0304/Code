#include<iostream>
using namespace std;

int main(){//Just If-ELSE
    int n;//n數字

    cin>>n;

    if(n<0)//如果是負數
        cout<<"M\n";
    else{
        if(n==0)//如果為0
            cout<<"Z\n";
        else if(n%2==1)//如果是奇數
            cout<<"O\n";
        else//如果是偶數
            cout<<"E\n";
    }
    return 0;
}
/*
Input:
-2
Output:
M
*//*
Input:
3
Output:
O
*/