#include<iostream>
using namespace std;

int main(){
    int a;

    cin>>a;

    if(a%2==1)
        a=3*a+1;
    else
        a/=2;
    cout<<a<<endl;//條件判斷

    return 0;
}
/*
Input:
7
Output:
22
*//*
Input:
66
Output:
33
*/