#include<iostream>
using namespace std;

int main(){//Xmas tree
    int x;//x數字
    int n=1;//n運算
    int i, j;//i, j旗標

    cin>>x;

    if(x%2==0){
        cout<<"This is a Xmas tree.\n";

        return 0;
    }
    for(i=1; i<=x; ++i){
        for(j=0; j<x-i; ++j)
            cout<<' ';
        for(j=0; j<n; ++j)
            cout<<i;
        cout<<endl;

        n+=2;
    }
    for(i=1; i<x; ++i){
        for(j=0; j<x-1; ++j)
            cout<<' ';
        cout<<i<<endl;//輸出結果
    }
    return 0;
}
/*
Input:
3
Output:
  1
 222
33333
  1
  2
*//*
Input:
1
Output:
1
*//*
Input:
4
Output:
This is a Xmas tree.
*/