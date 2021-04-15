#include<iostream>
#include<algorithm>
using namespace std;

typedef struct data{//線段
    int a;//a起始點
    int b;//b結束點
}Data;
Data num[10000];//num線段

bool cmp(Data a, Data b){//排序規則; a, b線段
    if(a.a==b.a)//如果起始點相同
        return a.b>b.b;//結束點大的在前面
    return a.a<b.a;//起始點小的在前面
}
int main(){//線段覆蓋長度(10503第3題)
    int n;//n總數
    int tmp1, tmp2;//tmp1, tmp2暫存值
    int ans=0;//ans答案
    int i;//i旗標

    while(scanf("%d", &n)!=-1){
        for(i=0; i<n; ++i)
            scanf("%d %d", &(num[i].a), &(num[i].b));
        sort(num, num+n, cmp);//排序

        for(i=0; i<n; ++i){
            tmp1=num[i].a;
            tmp2=num[i].b;

            while((num[i+1].a<tmp2) && (i+1<n)){//當資料的起始點在目前處理資料的結束點前面且尚有資料時，持續執行
                if(num[i+1].b<=tmp2)//如果資料的結束點在目前處理資料的結束點前面或同樣
                    ++i;//下一筆資料
                else{//如果資料的結束點在目前處理資料的結束點後面
                    tmp2=num[i+1].b;//新的結束點
                    ++i;
                }
            }
            ans+=tmp2-tmp1;//計算答案
        }
        printf("%d\n", ans);//輸出覆蓋範圍

        ans=0;//初始化
    }
    return 0;
}
/*
Input:
5
160 180
150 200
280 300
300 330
190 210
Output:
110
*//*
Input:
1
120 120
Output:
0
*/