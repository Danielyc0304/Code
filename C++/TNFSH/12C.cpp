#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x, a, b;//x總數, a成本, b售價
    double ans=0;//ans答案
    int i;//i旗標

    cin>>x;

    for(i=1; i<=x; ++i){
        cin>>a>>b;

        ans+=b-a;

        cout<<fixed<<setprecision(2)<<"Inv("<<i<<"): "<<ans<<endl;//輸出總金額
    }
    return 0;
}
/*
Input:
3
1000000 1000440
20000000 19800000
30000000 30432000
Output:
Inv(1): 440.00
Inv(2): -199560.00
Inv(3): 232440.00
*//*
Input:
6
18240094 47745717
44163785 98350383
11145409 20903369
26118929 31861033
11418885 17243658
89651286 23479080
Output:
Inv(1): 29505623.00
Inv(2): 83692221.00
Inv(3): 93450181.00
Inv(4): 99192285.00
Inv(5): 105017058.00
Inv(6): 38844852.00
*/