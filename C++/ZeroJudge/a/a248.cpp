#include<iostream>
using namespace std;

int main(){
    int a, b, N;//a, b數字; N小數位數
    int i;//i旗標

    while(cin>>a>>b>>N){
        cout<<a/b<<'.';

        a%=b;

        for(; N>0; --N){
            a*=10;
            cout<<a/b;
            a%=b;
        }
        cout<<endl;//輸出精準到N為位的小數點
    }
    return 0;
}
/*
Input:
18467 41 10
26500 6334 10
15724 19169 10
10 5 3
Output:
450.4146341463
4.1837701294
0.8202827481
2.000
*/