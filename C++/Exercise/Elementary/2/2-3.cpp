#include<iostream>
#include<ctime>
using namespace std;

#define Size 10

void print(int num[], int size){//輸出; num數字; size大小
    int i;//i旗標
    
    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;//輸出數字
}
void merge(int *num, int left, int right){//合併; num數字; left左邊界; right右邊界
    int tmp[Size], L, R;//tmp暫存值; L左半部旗標; R右半部旗標
    int i;//i旗標

    L=left;//設L為左半部第一項
    R=(left+right)/2+1;//設R為右半部第一項

    for(i=left; L<=(left+right)/2 && R<=right; ++i){//當L未超過中間且R未超過右邊界，持續執行
        if(num[L]<num[R]){//如果右半部比較大
            tmp[i]=num[L];//將左半部資料存入
            ++L;
        }
        else{//如果左半部比較大或一樣大
            tmp[i]=num[R];//將右半部資料存入
            ++R;
        }
    }
    for(; L<=(left+right)/2; ++i){//將未存完的左半部資料存完
        tmp[i]=num[L];
        ++L;
    }
    for(; R<=right; ++i){//將未存完的右半部資料存完
        tmp[i]=num[R];
        ++R;
    }
    for(i=left; i<=right; ++i)//將原本的數字覆蓋
        num[i]=tmp[i];
}
void mergesort(int *num, int left, int right){//排序; num數字; left左邊界; right右邊界
    if(left<right){//如果左邊界小於右邊界
        mergesort(num, left, (left+right)/2);
        mergesort(num, (left+right)/2+1, right);//分割成左半部與右半部
        merge(num, left, right);//合併
        
        cout<<"L="<<left<<" M="<<(left+right)/2<<" R="<<right<<endl;
        print(num, Size);//輸出排序中的定位點與陣列
    }
}
int main(){//合併排序，演算法效率為O(log(n))，暫存記憶體空間為O(n)
    int num[Size];//num數字
    int i;//i旗標

    srand(time(NULL));//產生隨機數

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;//隨機陣列
    cout<<"排序前\n";
    print(num, Size);//輸出排序前的陣列

    mergesort(num, 0, Size-1);//合併排序

    cout<<"排序後\n";
    print(num, Size);//輸出排序後的陣列
    
    return 0;
}