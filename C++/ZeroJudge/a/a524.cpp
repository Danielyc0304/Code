#include<iostream>
#include<algorithm>
using namespace std;

int main(){//手機之謎
    int n;//n數字
    int num[8];//num數字
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i){
            num[i]=n-i;
            cout<<num[i];
        }
        cout<<endl;//輸出初始密碼

        while(prev_permutation(num, num+n)){
            for(i=0; i<n; ++i)
                cout<<num[i];
            cout<<endl;//輸出字典反向排序所有密碼
        }
    }
    return 0;
}
/*
Input:
3
2
Output:
321
312
231
213
132
123
21
12
*/