#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

#define Size 10

bool cmp1(int a, int b){//排序規則; a, b數字
    return a<b;//數字小的在前面
}
bool cmp2(int a, int b){//排序規則; a, b數字
    return a>b;//數字大的在前面
}
void print(int num[], int size){//輸出; num數字; size大小
    int i;//i旗標

    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;//輸出數字
}
int main(){//利用STL進行排序
    int num[Size];//num數字
    int i;//i旗標

    srand(time(NULL));//產生隨機數

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;//隨機陣列
    cout<<"排序前\n";
    print(num, Size);
    sort(num, num+Size);//排序
    cout<<"使用sort(num, num+Size)排序後\n";
    print(num, Size);//輸出預設排序後的陣列

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;//隨機陣列
    cout<<"排序前\n";
    print(num, Size);
    sort(num, num+Size, cmp1);//排序
    cout<<"使用sort(num, num+Size, cmp1)排序後\n";
    print(num, Size);//輸出以cmp1為規則排序後的陣列

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;//隨機陣列
    cout<<"排序前\n";
    print(num, Size);
    sort(num, num+Size, cmp2);//排序
    cout<<"使用sort(num, num+Size, cmp2)排序後\n";
    print(num, Size);//輸出以cmp2為規則排序後的陣列
    
    return 0;
}