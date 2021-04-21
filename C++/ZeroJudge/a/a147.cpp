#include<iostream>
using namespace std;

int main(){//Print it all
    int n;//n結束數字
    int s;//s計算值

    while(cin>>n){
        if(n==0)
            break;
        for(s=1; s<n; ++s)
            if(s%7!=0)
                cout<<s<<' ';
        cout<<endl;//輸出7的倍數之外的數字
    }
    return 0;
}
/*
Input:
5
10
20
Output:
1 2 3 4
1 2 3 4 5 6 8 9
1 2 3 4 5 6 8 9 10 11 12 13 15 16 17 18 19
*/