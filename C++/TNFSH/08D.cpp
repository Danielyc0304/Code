#include<iostream>
using namespace std;

int main(){//奇偶問題
    int n, num;//n數字總數; num數字
    bool c=false;//c判斷
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>num;

        if(num%2==0)
            c=true;
    }
    if(c==false)
        cout<<"Very Good!!!\n";
    else
        cout<<"Oh, No!!!\n";//判斷、輸出結果
    return 0;
}
/*
Input:
3
11
13
554
Output:
Oh, No!!!
*//*
Input:
2
88641
34689
Output:
Very Good!!!
*/