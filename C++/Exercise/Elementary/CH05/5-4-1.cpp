#include<iostream>
#include<cmath>
using namespace std;

bool prime(int a){//質數; a數字
    bool c=true;//c判斷
    int i;//i旗標

    for(i=2; i<=sqrt(a); ++i)
        if(a%i==0){//如果找到可以整除的數
            c=false;

            break;
        }
    return c;
}
int main(){//求1到10000的所有質數
    int i;//i旗標

    for(i=2; i<=10000; ++i)
        if(prime(i)==true)//如果是質數
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