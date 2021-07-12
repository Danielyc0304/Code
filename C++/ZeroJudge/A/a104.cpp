#include<iostream>
#include<algorithm>
using namespace std;

int main(){//排序
    int num[1000], n;//num數字; n數字總數
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        sort(num, num+n);
        
        for(i=0; i<n; ++i)
            cout<<num[i]<<' ';
        cout<<endl;//輸出排序結果
    }
    return 0;
}
/*
Input:
6
7 9 0 4 1 8
Output:
0 1 4 7 8 9
*//*
Input:
8
1 9 9 0 0 9 2 8
Output:
0 0 1 2 8 9 9 9
*/