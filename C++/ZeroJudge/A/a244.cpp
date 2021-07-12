#include<iostream>
using namespace std;

int main(){//新手訓練 ~ for + if
    int N, a;//N測資總數; a運算符
    long int b, c;//b, c數字
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>a>>b>>c;

        switch(a){
            case 1: cout<<b+c<<endl; break;
            case 2: cout<<b-c<<endl; break;
            case 3: cout<<b*c<<endl; break;
            default: cout<<b/c<<endl;//輸出結果
        }
    }
    return 0;
}
/*
Input:
4
1 2 3
2 2 3
3 2 3
4 2 3
Output:
5
-1
6
0
*/