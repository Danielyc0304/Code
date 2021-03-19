#include<iostream>
using namespace std;

int main(){
    int n;//n數字

    cin>>n;

    if(n<0)
        cout<<"M\n";
    else{
        if(n==0)
            cout<<"Z\n";
        else if(n%2==1)
            cout<<"O\n";
        else
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