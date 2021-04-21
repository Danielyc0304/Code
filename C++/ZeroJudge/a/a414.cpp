#include<iostream>
using namespace std;

int main(){//位元運算之進位篇
    int N;//N數字
    int ans=0;//ans答案

    while(scanf("%d", &N)){
        if(N==0)
            break;
        while(N!=0){
            if(N%2==0)
                break;
            ++ans;
            N/=2;
        }
        printf("%d\n", ans);//輸出以二進制計算需進位數

        ans=0;//初始化
    }
    return 0;
}
/*
Input:
1
4
7
17
0
Output:
1
0
3
1
*/