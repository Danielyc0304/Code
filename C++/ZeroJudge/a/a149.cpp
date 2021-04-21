#include<iostream>
using namespace std;

int main(){//乘乘樂
    int T, num;//T數字總數; num數字
    int ans=1;//ans答案
    int i;//i旗標

    cin>>T;

    for(i=0; i<T; ++i){
        cin>>num;

        if(num==0)
            ans*=num;
        while(num!=0){
            ans*=num%10;
            num/=10;
        }
        cout<<ans<<endl;//輸出位數積

        ans=1;//初始化
    }
    return 0;
}
/*
Input:
3
356
123
9999
Output:
90
6
6561
*/