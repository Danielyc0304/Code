#include<iostream>
#include<cstring>
using namespace std;

struct data{//資料
    char name[40];//name名字
    int math;//math數學成績
    int english;//english英文成績
};
int main(){//memcpy範例
    struct data a, b;//a, b學生資料
    char myname[5]="John";//myname名字

    memcpy(a.name, myname, sizeof(myname));//複製myname到a的name
    a.math=99;
    a.english=85;
    memcpy(&b, &a, sizeof(a));//複製a的資料到b的資料

    cout<<b.name<<' '<<b.math<<' '<<b.english<<endl;//輸出結果
    
    return 0;
}