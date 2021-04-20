#include<iostream>
using namespace std;

int main(){//鞭在手，問天下誰是英雄？
    int m, n;//m功力值; n鞭數
    int i;//i旗標

    cin>>m>>n;

    for(i=1; i<=n; ++i)
        cout<<i<<':'<<m*(i*m)*(i*m)<<endl;//輸出傷害值
    return 0;
}
/*
Input:
5
6
Output:
1:125
2:500
3:1125
4:2000
5:3125
6:4500
*/