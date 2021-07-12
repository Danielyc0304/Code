#include<iostream>
using namespace std;

int main(){//Eva 的回家作業
    int num[5], t;//num數字; t數列總數
    int s;//s計算值
    int i, j;//i, j旗標

    cin>>t;

    for(i=0; i<t; ++i){
        for(j=0; j<4; ++j)
            cin>>num[j];
        if(num[1]-num[0]==num[2]-num[1]){
            s=num[3]-num[2];
            num[4]=num[3]+s;
        }
        else{
            s=num[3]/num[2];
            num[4]=num[3]*s;
        }
        for(j=0; j<5; ++j)
            cout<<num[j]<<' ';
        cout<<endl;//輸出數列
    }
    return 0;
}
/*
Input:
2
1 2 3 4
1 2 4 8
Output:
1 2 3 4 5
1 2 4 8 16
*/