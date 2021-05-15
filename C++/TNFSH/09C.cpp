#include<iostream>
using namespace std;

int main(){//市政質詢抽抽樂
    int x, num;//x抽籤次數; num數字
    bool c=false;//c判斷
    int i;//i旗標

    cin>>x;

    for(i=0; i<x; ++i){
        cin>>num;

        if(num==87)
            c=true;
    }
    if(c==false)
        cout<<"NO\n";
    else
        cout<<"YES\n";//判斷、輸出結果
    return 0;
}
/*
Input:
4 11 12 14 15
Output:
NO
*//*
Input:
6 70 16 87 30 2 18
Output:
YES
*/