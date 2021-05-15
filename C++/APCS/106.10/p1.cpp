#include<iostream>
using namespace std;

int main(){//邏輯運算子
    int a, b, c;//a, b數字; c目標
    bool count=false;//count判斷

    cin>>a>>b>>c;
    
    if(a>1) a=1;
    if(b>1) b=1;
    if(c>1) c=1;//如果大於1，設定為1

    if((a&b)==c){//a AND b
        cout<<"AND\n";
        count=true;
    }
    if((a|b)==c){//a OR b
        cout<<"OR\n";
        count=true;
    }
    if((a^b)==c){//a XOR b
        cout<<"XOR\n";
        count=true;
    }
    if(count==false)//如果皆不成立
        cout<<"IMPOSSIBLE\n";
    return 0;
}
/*
Input:
0 0 0
Output:
AND
OR
XOR
*//*
Input:
1 1 1
Output:
AND
OR
*//*
Input:
3 0 1
Output:
OR
XOR
*//*
Input:
0 0 1
Output:
IMPOSSIBLE
*/