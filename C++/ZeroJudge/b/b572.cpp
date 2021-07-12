#include<iostream>
using namespace std;

int main(){//忘了東西的傑克
    int N, H1, M1, H2, M2, num;//N測資總數; H1, M1目前時間; H2, M2發車時間; num需要時間
    bool c=false;//c判斷
    int i;//i旗標

    cin>>N;
    for(i=0; i<N; ++i){
        cin>>H1>>M1>>H2>>M2>>num;

        M1+=num;
        H1+=M1/60;
        M1%=60;

        if(H1<H2 || (H1==H2 && M1<=M2))//如果來得及
            c=true;
        if(c==true)
            cout<<"Yes\n";
        else
            cout<<"No\n";//輸出結果
        c=false;//初始化
    }
    return 0;
}
/*
Input:
2
21 00 21 15 13
20 55 21 12 20
Output:
Yes
No
*/