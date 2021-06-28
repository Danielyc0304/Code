#include<iostream>
#include<ctime>
using namespace std;

#define Size 10//Size最大值

void print(int num[], int size){//輸出; num數字; size大小
    int i;//i旗標

    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;//輸出數字
}
int main(){//氣泡排序，總次數為n^n/2、演算法效率為O(n^2)
    int num[Size], tmp;//num數字; tmp暫存值
    int i, j;//i, j旗標

    srand(time(NULL));//產生隨機數

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;//隨機陣列
    cout<<"排序前\n";
    print(num, Size);//輸出排序前的陣列

    for(i=Size-1; i>1; --i){
        for(j=0; j<i; ++j)//逐一尋訪
            if(num[j]>num[j+1]){//如果前項比後項大
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;//交換數字
            }
        cout<<"外層迴圈跑"<<Size-i<<"次結果為\n";
        print(num, Size);//輸出排序中的陣列
    }
    cout<<"排序後\n";
    print(num, Size);//輸出排序後的陣列
    
    return 0;
}