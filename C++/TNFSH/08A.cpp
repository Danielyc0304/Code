#include<iostream>
using namespace std;

int main(){//因數列舉
    int n;//n數字
    bool c=false;//c判斷
    int i;//i旗標

    cin>>n;

    for(i=2; i<n; ++i)
        if(n%i==0){
            cout<<i<<endl;

            c=true;
        }
    if(c==false)
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