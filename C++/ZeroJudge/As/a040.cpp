#include<iostream>
#include<cmath>
using namespace std;

int main(){//阿姆斯壯數
    int n, m;//n起始數字; m結束數字
    bool c=false;//c判斷
    int s, num, tmp, sum=0;//s計算值; num數字; tmp暫存值; sum總和
    int i;//i旗標

    cin>>n>>m;

    for(; n<=m; ++n){
        for(s=0; n/pow(10, s)>=1; ++s);
        tmp=n;

        while(tmp!=0){
            sum+=pow(tmp%10, s);
            tmp/=10;
        }
        if(sum==n){
            cout<<n<<' ';

            c=true;
        }
        sum=0;
    }
    if(c==false)
        cout<<"none";
    cout<<endl;//判斷、輸出結果

    return 0;
}
/*
Input:
100 999
Output:
153 370 371 407
*//*
Input:
10 99
Output:
none
*/