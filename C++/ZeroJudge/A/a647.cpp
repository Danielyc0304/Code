#include<iostream>
#include<iomanip>
using namespace std;

int main(){//投資專家
    int n;//n測資總數
    double m, p;//m投資金額; p價值
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>m>>p;

        if(m>p)
            cout<<fixed<<setprecision(2)<<((p-m)/m)*100-0.00001<<"% ";//如果獲利率為負，減去0.00001消除0.9循環小數的誤差
        else
            cout<<fixed<<setprecision(2)<<((p-m)/m)*100+0.00001<<"% ";//如果獲利率為正，加上0.00001消除0.9循環小數的誤差
        if(((p-m)/m)*100>=10 || ((p-m)/m)*100<=-7)
            cout<<"dispose\n";
        else
            cout<<"keep\n";//判斷、輸出結果
    }
    return 0;
}
/*
Input:
4
200 177
200 200
892 1000
1000 992
Output:
-11.50% dispose
0.00% keep
12.11% dispose
-0.80% keep
*/