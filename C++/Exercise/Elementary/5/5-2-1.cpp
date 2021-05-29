#include<iostream>
using namespace std;

int main(){//最大子陣列暴力解法(一)
    int a[10];//a數字
    int s=0;//s計算值
    int ans=-100000001;//ans答案
    int i, j, k;//i, j, k旗標

    for(i=0; i<10; ++i)
        cin>>a[i];
    for(i=0; i<10; ++i)
        for(j=i; j<10; ++j){
            for(k=i; k<=j; ++k)
                s+=a[k];//累加
            if(s>ans)
                ans=s;//更改最大值
            s=0;//初始化
        }
    cout<<ans<<endl;//輸出最大連續子陣列總和
    
    return 0;
}
/*
Input:
1 2 3 4 5 -10 20 30 -40 10
Output:
55
*/