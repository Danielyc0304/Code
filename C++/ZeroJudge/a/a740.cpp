#include<iostream>
#include<cmath>
using namespace std;

int num[44722], s=3;//num質數
int j=1;//j旗標

void prime(int max){//建立質數表; max最大值
    int c=0;//c判斷
    int i;//i旗標
    
    for(; s<=sqrt(max); s+=2){//執行到最大值開根號，並以奇數執行
        for(i=0; i<j; ++i)
            if(s%num[i]==0){
                c=1;
                
                break;
            }
        if(c==0){
            num[j]=s;
            ++j;
        }
        c=0;//初始化
    }
}
int main(){//质因数之和
    int x;//x數字
    int ans=0;//ans答案
    int i;//i旗標

    num[0]=2;//第一個質數為2
    
    while(cin>>x){
        prime(x);//質數表

        for(i=0; i<j && x!=1; ++i)
            while(x%num[i]==0){
                ans+=num[i];
                x/=num[i];
            }
        if(x!=1)
            ans+=x;
        cout<<ans<<endl;//輸出結果

        ans=0;//初始化
    }
    return 0;
}
/*
Input:
19
32
Output:
19
10
*/