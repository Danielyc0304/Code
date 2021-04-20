#include<iostream>
using namespace std;

int main(){//A patter of 0's surrounded by *'s
    int a, b;//a, b數字
    int i, j;//i, j旗標

    cin>>a>>b;

    for(i=0; i<a; ++i){
        if(i%2==0)
            for(j=0; j<b; ++j)
                cout<<'*';
        else{
            for(j=0; j<b/2; ++j)
                cout<<"*0";
            if(b%2==1)
                cout<<'*';
        }
        cout<<endl;//輸出結果
    }
    return 0;
}
/*
Input:
3
5
Output:
*****
*0*0*
*****
*//*
Input:
5
11
Output:
***********
*0*0*0*0*0*
***********
*0*0*0*0*0*
***********
*/