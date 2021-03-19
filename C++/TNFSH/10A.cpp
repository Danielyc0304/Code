#include<iostream>
using namespace std;

int main(){
    int n;//n數字
    int m=1;//m運算
    int i;//i旗標

    cin>>n;

    for(; n>0; --n){
        for(i=0; i<m; ++i)
            cout<<n;
        cout<<endl;

        ++m;//輸出結果
    }
    return 0;
}
/*
Input:
5
Output:
5
44
333
2222
11111
*//*
Input:
2
Output:
2
11
*/