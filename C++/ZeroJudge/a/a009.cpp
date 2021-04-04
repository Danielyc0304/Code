#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string a;//a字串
    int i;//i旗標

    getline(cin, a);

    for(i=0; i<a.length(); ++i)
        cout<<(char)((int)a[i]-7);
    cout<<endl;//輸出結果

    return 0;
}
/*
Input:
1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5
Output:
*CDC is the trademark of the Control Data Corporation.
*//*
Input:
1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5
Output:
*IBM is a trademark of the International Business Machine Corporation.
*/