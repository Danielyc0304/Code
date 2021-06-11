#include<iostream>
using namespace std;

struct Queue{//佇列
    int num[100];//num數字
    int front=-1;//front第一項
    int back=-1;//back最後一項
};
struct Queue a;//a數字

void insertQueue(int num){//輸入; num數字
    if(a.back==99)//如果已滿
        cout<<"Queue是滿的\n";
    else//如果未滿
        a.num[++a.back]=num;//(++a.back, a.num[a.back]=num)
}
void printQueue(){//輸出
    int i;//i旗標

    cout<<"目前儲存的元素有";
    for(i=a.front+1; i<=a.back; ++i)
        cout<<a.num[i]<<' ';
    cout<<endl;
}
void deleteQueue(){//刪除
    if(a.front==a.back)//如果全部取完
        cout<<"Queue是空的/n";
    else//如果未取完
        cout<<a.num[++a.front]<<endl;//輸出第一項
}
int main(){//Queue使用array實作
    int i;//i旗標
    
    for(i=1; i<5; ++i){
        insertQueue(i);//輸入
        printQueue();//輸出
    }
    cout<<"從Queue取出最前面的元素為", deleteQueue();//取出第一項
    printQueue();//輸出

    return 0;
}
/*
Output:
目前儲存的元素有1 
目前儲存的元素有1 2 
目前儲存的元素有1 2 3 
目前儲存的元素有1 2 3 4 
從Queue取出最前面的元素為1
目前儲存的元素有2 3 4
*/