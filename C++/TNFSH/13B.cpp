#include<iostream>
using namespace std;

int main(){
    int N;//N數字

    cin>>N;
    
    while(N%2==0)
        N/=2;
    cout<<N<<endl;//輸出數字

    return 0;
}
/*
Input:
20
Output:
5
*//*
Input:
1
Output:
1
*/