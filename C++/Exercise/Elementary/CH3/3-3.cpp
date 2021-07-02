#include<iostream>
using namespace std;

int main(){//神奇的蝸牛(模擬高度)
    int h, d, n;//h樹的高度; d白天爬行距離; n第一天滑落距離
    double hei=0, dow, s;//hei目前高度; dow掉落距離; s計算值
    int ans=0;//ans答案

    while(cin>>h>>d>>n){
        dow=(double)n;//轉換為小數型別
        s=n/10.0;//計算每晚滑落距離

        while(1){
            ++ans;//計算天數
            hei+=d;//白天往上爬
            if(hei>=h)//如果爬到樹頂
                break;
            hei-=dow;//晚上往下掉
            dow+=s;//往下掉的距離增加
            if(hei<=0)//如果掉到地面
                break;
        }
        if(hei>=h)//如果爬到樹頂
            cout<<"第"<<ans<<"天爬到樹頂"<<endl;
        else//如果掉到地面
            cout<<"第"<<ans<<"天掉到地面"<<endl;
        ans=0, hei=0;//初始化
    }
    return 0;
}
/*
Input:
100 5 1
Output:
第82天掉到地面
*/