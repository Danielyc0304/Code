#include<iostream>
using namespace std;

int num[10000], n, m;//num數字; n糖果總數; m小孩總數

bool judge(int a){//判斷可行性; a數字
    int s=0;//s計算值
    int i;//旗標

    for(i=0; i<n; ++i)
        s+=num[i]/a;
    return s>=m;//如果以a個同種糖果為一組，可以分給10個人以上，回傳是
}
int main(){//整數平均分配
    int L=0, M, R;//L左邊界; M中間點; R右邊界
    int mnum=0;//mnum最大的糖果數
    int i;//i旗標

    while(cin>>n){
        for(i=0 ;i<n; ++i){
            cin>>num[i];

            mnum=max(mnum, num[i]);
        }
        cin>>m;

        R=mnum;

        while(L<R){//二元搜尋
            M=(L+R)/2;

            if(judge(M)){//每個小孩只接受同一種糖果，以M個同種糖果為一組，
                if(judge(M+1))//如果每組多一顆也可以
                    L=M+1;
                else{
                    L=M;

                    break;
                }
            }
            else
                R=M-1;
        }
        cout<<L<<endl;//輸出最多可以拿幾顆

        L=0, mnum=0;//初始化
    }
    return 0;
}
/*
Input:
10
10
21
16
40
55
45
35
54
33
46
10
Output:
23
*/