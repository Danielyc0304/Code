#include<iostream>
using namespace std;

int main(){//最大子陣列(Maximum Subarray)
    int a[10];//a數字
    int s=0;//s計算值;
    int ans=-100000001;//ans答案
    int i;//i旗標

    for(i=0; i<10; ++i)
        cin>>a[i];
    for(i=0; i<10; ++i){
        s+=a[i];//累加

        if(s<0)//如果s小於0，對計算最大值沒有幫助
            s=0;
        if(s>ans)
            ans=s;
    }
    cout<<ans<<endl;//輸出最大連續總和

    s=0, ans=-100000001;//初始化

    return 0;
}
/*
Input:
1 2 3 4 5 -10 20 30 -40 10
Output:
55
*/