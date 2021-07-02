#include<iostream>
#include<cmath>
using namespace std;

bool c[10001]={false};//c判斷

void erase(int a){//刪除; a數字
    int i, j;//i, j旗標

    c[1]=true;//刪掉1

    for(i=2; i<=sqrt(a); ++i)
        if(!c[i])
            for(j=i+i; j<=a; j+=i)
                c[j]=true;
}
int main(){//篩選法求1到10000的質數
    int i;//i旗標
    
    erase(10000);

    for(i=2; i<=10000; ++i)
        if(!c[i])//如果沒有被刪掉
            cout<<i<<endl;//輸出質數
    return 0;
}
/*
Output(輸出最後10個質數):
9887
9901
9907
9923
9929
9931
9941
9949
9967
9973
*/