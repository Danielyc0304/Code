#include<iostream>
using namespace std;

int main(){
    int n;//n數字
    int c=0;//c計數
    int i;//i旗標

    cin>>n;

    for(i=2; i<n; ++i)
        if(n%i==0){
            cout<<i<<endl;

            c=1;
        }
    if(c==0)
        cout<<"prime\n";//輸出因數
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
23
Output:
prime
*//*
Input:
7
Output:
prime
*/