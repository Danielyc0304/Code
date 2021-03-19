#include<iostream>
using namespace std;

int main(){
    int a, b, c;//a起始數字, b結束數字, c目標數字
    int ans;//ans答案
    int i;//i旗標

    cin>>a>>b>>c;

    for(i=1; ans!=c; ++i){
        ans=(a+b)/2;

        cout<<i<<": "<<ans<<endl;

        if(ans>c)
            b=ans-1;
        else
            a=ans+1;//輸出每一次的結果
    }
    return 0;
}
/*
Input:
3 12 5
Output:
1: 7
2: 4
3: 5
*//*
Input:
1 1000 888
Output:
1: 500
2: 750
3: 875
4: 938
5: 906
6: 890
7: 882
8: 886
9: 888
*/