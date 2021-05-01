#include<iostream>
using namespace std;

int main(){//名次於我如浮雲
    int gra[50], N;//gra成績; N成績總數
    int ans1=0, ans2=0, ans3=0;//ans1, ans2, ans3答案
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>gra[i];

        if(gra[0]>gra[i])
            ++ans1;
        else if(gra[0]==gra[i])
            ++ans2;
        else
            ++ans3;
    }
    cout<<ans1<<endl<<ans2-1<<endl<<ans3<<endl;//輸出比第一項低、同分、高的人數

    return 0;
}
/*
Input:
10
42 71 63 73 1 52 8 40 38 88
Output:
4
0
5
*/