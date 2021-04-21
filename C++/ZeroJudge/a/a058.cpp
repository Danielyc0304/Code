#include<iostream>
using namespace std;

int main(){//MOD3
    int n, num;//n數字總數; num數字
    int c1=0, c2=0, c3=0;//c1, c2, c3計數
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>num;

        switch(num%3){
            case 0: ++c1; break;
            case 1: ++c2; break;
            default: ++c3;
        }
    }
    cout<<c1<<' '<<c2<<' '<<c3<<endl;//判斷、輸出結果

    return 0;
}
/*
Input:
5
1
2
3
4
5
Output:
1 2 2
*/