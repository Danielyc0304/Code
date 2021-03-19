#include<iostream>
using namespace std;

int main(){
    int n, s;//n人數, s起始號碼
    int i;//i旗標

    cin>>n>>s;

    if(n>45 || n<=0){
        cout<<"Error";

        return 0;
    }
    for(i=1; i<=n; ++i)
        cout<<i<<": "<<s+i<<endl;//輸出號碼
    return 0;
}
/*
Input:
10
190800
Output:
1: 190801
2: 190802
3: 190803
4: 190804
5: 190805
6: 190806
7: 190807
8: 190808
9: 190809
10: 190810
*//*
Input:
50
203300
Output:
Error
*//*
Input:
3
100300
Output:
1: 100301
2: 100302
3: 100303
*/