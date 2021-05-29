#include<iostream>
#include<iomanip>
using namespace std;

int main(){//全班某科成績計算
    int n, gra;//n成績總數; gra成績
    double s=0;//s計算值
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>gra;

        s+=gra;
    }
    cout<<fixed<<setprecision(2)<<s/n<<endl;//輸出平均成績

    return 0;
}
/*
Input:
3
45 63 89
Output:
65.67
*//*
Input:
5
43 3 12 100 99
Output:
51.40
*/