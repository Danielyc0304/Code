#include<iostream>
using namespace std;

int main(){//使用二元搜尋搜尋資料
    int a[10]={45, 59, 62, 67, 70, 78, 83, 85, 88, 92};//a數字
    int L=0, M=5, R=9;//L左邊界; M中間點; R右邊界

    while(a[M]!=59){//二元搜尋
        cout<<"檢查a["<<M<<"]="<<a[M]<<"是否等於59\n";

        if(L>=R)//如果左邊界大於等於右邊界
            break;
        if(a[M]>59)//如果目標數在左邊
            R=M-1;
        else//如果目標數在右邊
            L=M+1;
        M=(L+R)/2;

        cout<<"right更新為"<<R<<endl;
        cout<<"left更新為"<<L<<endl;
        cout<<"mid更新為"<<M<<endl;

        if(a[M]==59)
            cout<<"找到59分\n";
        else
            cout<<"找不到59分\n";//輸出結果
    }
    return 0;
}
/*
Output:
檢查a[5]=78是否等於59
right更新為4
left更新為0
mid更新為2
找不到59分
檢查a[2]=62是否等於59
right更新為1
left更新為0
mid更新為0
找不到59分
檢查a[0]=45是否等於59
right更新為1
left更新為1
mid更新為1
找到59分
*/