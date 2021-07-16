#include<iostream>
#include<cmath>
using namespace std;

struct box{//箱子
    int length;//length邊長
    int space;//space剩餘面積
};
int main(){//Package
    int num[7];//num產品數量
    struct box ans;//ans答案
    int i;//i旗標

    while(cin>>num[0]){
        if(num[0]==-1)
            break;
        for(i=1; i<7; ++i)
            cin>>num[i];
        for(i=6; i>=0; --i){//預設64為1單位長-->32為1單位長-->...-->降階至1為1單位長
            ans.length*=2;//邊長更新為2倍
            ans.space*=4;//剩餘面積更新為4倍

            ans.space-=num[i];
            while(ans.space<0){//如果位置不夠放
                ++ans.length;//邊長加1單位
                ans.space+=pow(ans.length, 2)-pow(ans.length-1, 2);//加上(現在邊長的平方-原來邊長的平方)的剩餘空間
            }
        }
        cout<<ans.length<<endl;//輸出箱子最小邊長

        ans.length=0, ans.space=0;//初始化
    }
    return 0;
}
/*
Input:
1 0 0 0 0 0 0
1 1 1 1 0 0 0
0 0 0 0 20 0 1
0 0 0 1 20 0 1
-1
Output:
1
12
96
104
*/