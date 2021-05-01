#include<iostream>
#include<cmath>
using namespace std;

int num[10000], s=3;//num質數; s計算值
int j=1;//j旗標

void prime(int max){//建立質數表; max最大值
    int c=0;//c判斷
    int i;//i旗標

    for(; s<=sqrt(max); s+=2){
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
int main(){//質數又來囉
    int a, b;//a起始數字; b結束數字
    int c=0;//c判斷
    int ans=0;//ans答案
    int i;//i旗標

    num[0]=2;//第一個質數為2

    while(cin>>a>>b){
        prime(b);//質數表

        if(a==1){//如果起始數字是為1
            if(b==1)//如果結束數字也為1
                ans=-1;//答案為0
            ++a;
        }
        if(a==2){//如果起始數字為2，計數值為1，從3開始
            ++ans;
            ++a;
        }
        else if(a%2==0)//如果是偶數，起始數字+1
            ++a;
        for(; a<=b; a+=2){
            for(i=0; i<j; ++i)
                if(a%num[i]==0 && a/num[i]!=1){
                    c=1;
                    
                    break;
                }
            if(c==0)
                ++ans;
            c=0;//初始化
        }
        cout<<ans<<endl;//輸出兩數間的質數數量

        ans=0;//初始化
    }
    return 0;
}
/*
Input:
3 7
6 6
30 50
Output:
3
0
5
*/