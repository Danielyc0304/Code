#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

#define Size 10

bool cmp1(int a, int b){
    return a<b;
}
bool cmp2(int a, int b){
    return a>b;
}
void print(int num[], int size){
    int i;

    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;
}
int main(){//利用STL進行排序
    int num[Size];
    int i;

    srand(time(NULL));

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;
    cout<<"排序前\n";
    print(num, Size);
    sort(num, num+Size);
    cout<<"使用sort(num, num+Size)排序後\n";
    print(num, Size);

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;
    cout<<"排序前\n";
    print(num, Size);
    sort(num, num+Size, cmp1);
    cout<<"使用sort(num, num+Size, cmp1)排序後\n";
    print(num, Size);

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;
    cout<<"排序前\n";
    print(num, Size);
    sort(num, num+Size, cmp2);
    cout<<"使用sort(num, num+Size, cmp2)排序後\n";
    print(num, Size);
    
    return 0;
}