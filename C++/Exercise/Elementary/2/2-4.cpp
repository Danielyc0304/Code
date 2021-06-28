#include<iostream>
#include<ctime>
using namespace std;

#define Size 10//Size最大值

void swap(int *a, int *b){//交換數字; a, b位址
    int tmp;//tmp暫存值

    tmp=*a;
    *a=*b;
    *b=tmp;//交換位址
}
void print(int num[], int size){//輸出; num數字; size大小
    int i;//i旗標

    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;//輸出數字
}
void quicksort(int *num, int left, int right){//排序; num數字; left左邊界; right右邊界
    int i, j;//i, j旗標

    if(left<right){//如果左邊界小於右邊界
        i=left;
        j=right+1;

        while(1){
            while((i<right) && (num[++i]<num[left]));//由前往後，尋找比第一個數大的值(++i, num[i]<num[left])
            while((j>0) && (num[--j]>num[left]));//由後往前，尋找比第一個數小的值(--j, num[j]>num[left])

            if(i>=j)//如果大的數字在右邊
                break;
            swap(&num[i], &num[j]);//交換數字
        }
        swap(&num[left], &num[j]);//與第一個數交換

        cout<<"L="<<left<<" j="<<j<<" R="<<right<<endl;
        print(num, Size);//輸出排序中的陣列

        quicksort(num, left, j-1);
        quicksort(num, j+1, right);//以第一個數的現在位置為基準，分割成左半部與右半部
    }
}
int main(){//快速排序， 演算法效率為O(nlog(n))，暫存記憶體空間為O(log(n))
    int num[Size];//num數字
    int i;//i旗標

    srand(time(NULL));//產生隨機數

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;//隨機陣列
    cout<<"排序前\n";
    print(num, Size);//輸出排序前的陣列

    quicksort(num, 0, Size-1);//快速排序

    cout<<"排序後\n";
    print(num, Size);//輸出排序後的陣列

    return 0;
}