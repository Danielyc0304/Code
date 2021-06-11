#include<iostream>
using namespace std;

struct Stack{//堆疊
    int num[100];//num數字
    int top=-1;//top最上面一項
};
struct Stack a;//a數字

void insertStack(int num){//輸入; num數字
    if(a.top==99)//如果已滿
        cout<<"Stack是滿的\n";
    else//如果未滿
        a.num[++a.top]=num;//(++a.back, a.num[a.back]=num)
}
void printStack(){//輸出
    int i;//i旗標

    cout<<"Stack目前儲存的元素有";
    for(i=0; i<=a.top; ++i)
        cout<<a.num[i]<<' ';
    cout<<endl;//輸出佇列
}
void deleteStack(){//刪除
    if(a.top==-1)//如果全部取完
        cout<<"Stack是空的\n";
    else//如果未取完
        cout<<a.num[a.top--]<<endl;//輸出第一項
}
int main(){//Stack使用array實作
    int i;//i旗標

    for(i=1; i<=4; ++i){
        insertStack(i);//輸入
        printStack();//輸出
    }
    cout<<"從Stack取出最上面的元素為", deleteStack();//取出最上面一項
    printStack();//輸出

    return 0;
}
/*
Output:
Stack目前儲存的元素有1 
Stack目前儲存的元素有1 2
Stack目前儲存的元素有1 2 3
Stack目前儲存的元素有1 2 3 4
從Stack取出最上面的元素為4
Stack目前儲存的元素有1 2 3
*/